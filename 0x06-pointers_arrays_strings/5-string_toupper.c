#include "main.h"
/**
 * string_toupper -coverts lowercase characters in a string to uppercase
 * @c: the pointer variable to the string of characters
 * Return: uppercase characters
 */
char *string_toupper(char *c)
{
	int f;

	for (f = 0; c[f] != '\0'; f++)
	{
		if (c[f] >= 'a' && c[f] <= 'z')
		{
			c[f] = c[f] = 32;
		}
	}
	return (c);
}

