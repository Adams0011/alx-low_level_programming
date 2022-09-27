#include "main.h"
/**
 * _memset - the function that sets memory in bufer to b
 * @s: buffer to be changed
 * @b: char to be set
 * @n: the number of spaces to be changed
 * Return: the pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	k = 0;
	while ((k < n))
	{
		s[k] = b;
		k++;
	}

	return (s);
}
