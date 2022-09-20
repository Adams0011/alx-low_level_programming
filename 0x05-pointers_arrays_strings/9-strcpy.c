#include "main.h"
/**
 * char *_strcpy - (char *dest, char *src)
 * @dest: pointer to the buffer to copy from
 * @src: pointer to the string to be copied
 * Return: string from dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, b;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}

	for (b = 0; b < length; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
