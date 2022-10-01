#include "main.h"
/**
 * *_strchr - the function that searches a string for a giving character
 * @s: the string given
 * @c: the character given
 * Return: returns pointer to character in string, or null
 */
char *_strchr(char *s, char c)
{
	int b = 0;

	while (s[b] != '\0')
	{
		if (s[b] == c)
			return (s + b);
		a++;
	}
	if (s[b] == c)
	{
		return (s + b);
	}
		return ('\0');
}

