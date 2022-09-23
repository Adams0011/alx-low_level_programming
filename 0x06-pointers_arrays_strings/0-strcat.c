#include "main.h"
/**
 * _strcat - concatinate two strings
 * @src: the string to be appended to dest
 * @dest: The string in which src is appended
 * Return: dest to the destination array
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

		while (dest[c] != '\0')
		{
			c++;
		}
		while (src[d] != '\0')
		{
			dest[c] = src[d];
			c++;
			d++;
		}
		dest[c] = '\0';
		return (dest);
}
