#include "main.h"
/**
 * _strlen -a main function to return the length of a string
 * @s: the string to be evaluated
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int b;

	b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
