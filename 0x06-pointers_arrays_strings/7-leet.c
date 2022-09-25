#include "main.h"
/**
 * leet - the main function that replaces some characters in a string
 * @c: pointer variable that holds the string
 * Return: c
 */
char *leet(char *c)
{
	int a, b, replacer[] = {'4', '3', '0', '7', '1'};
	int locate[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (c[a] == locate[b])
			{
				c[a] = replacer[b / 2];
				b = 9;
			}
		}
	}
	return (c);
}
