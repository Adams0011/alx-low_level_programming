#include "main.h"
/**
 * _strncat - the fuction that concatenates the strings
 * @dest: the string that is being copied from
 * @src: the string to be appended to dest
 * @n: the number of bytes to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
		{
			c = n;
		}

	}
	return (dest);
}
