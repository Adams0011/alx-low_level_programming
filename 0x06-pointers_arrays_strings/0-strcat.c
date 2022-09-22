#include "main.h"
/**
 * _strcat - concatinate two strings
 * @src: the string to be appended to dest
 * @dest: The string in which src is appended to
 * Return: dest to the destination array
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	/* overwrite the null byte at the end of the dest */
		while (dest[c] != '\0')
		{
			c++;
		}
		/* copies the byte from string src */
		while (src[d] != '\0')
		{
			dest[c] = src[d];
			c++;
			d++;
		}
		/* adding the terminating null byte */
		dest[c] = '\0';
		return (dest);
}

