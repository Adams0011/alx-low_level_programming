#include "main.h"
/**
 * string_toupper - function that coverts lower case characters to uppercase
 * @c: the pointer variable to the character strings
 * Return: uppercase characters
 */
char *string_toupper(char c *)
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

