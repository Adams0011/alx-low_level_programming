#include "main.h"
/**
 * cap_string - a function which capitalize all words of a string
 * @c: pointer variable that holds the array of characters in the string
 * Return: caps on first letter of a seperator
 */
char *cap_string(char *c)
{
	int a, m;
	int cap = 32;
	int seprt[] = {'\n', '\t', ',', ';', '.', '?', '"', '(', ')', '{', '}', ' '};

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
			c[a] = c[a] - cap;
		}

		cap = 0;

		for (m = 0; m <= 12; m++)
		{
			if (c[a] == seprt[m])
			{
				m = 12;
				cap = 32;
			}
		}
	}
	return (c);
}
