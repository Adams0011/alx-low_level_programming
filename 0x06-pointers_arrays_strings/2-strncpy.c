#include "main.h"
/**
 * _strncpy - the function that copies the string like the function strncpy
 * @dest: the destination string to be copied to
 * @src: the string which is being copied from
 * @n: the number of characters inputed
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		if (l < n)
		{
			dest[l] = src[l];
		}
	}
	while (l < n)
		dest[l++] = '\0';

	return (dest);
}
