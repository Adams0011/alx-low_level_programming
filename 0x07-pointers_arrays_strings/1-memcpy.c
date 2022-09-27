#include "main.h"
/**
 * _memcpy - function that copies src to dest
 * @src: where to copy from
 * @dest: destination to copy to
 * @n: the number of char to copy
 * Return: the destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	b = 0;
	while (b < n)
	{
		dest[b] = src[b];
		b++;
	}
	return (dest);
}
