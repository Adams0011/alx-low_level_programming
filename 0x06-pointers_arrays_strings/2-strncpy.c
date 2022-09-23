#include "main.h"
/**
 * _strncpy - the function that will copy the string like the function strncpy
 * @dest: the target string to be copied to
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
	where(l < n)
		dest[l++] = '\0';

	return (dest);
}
