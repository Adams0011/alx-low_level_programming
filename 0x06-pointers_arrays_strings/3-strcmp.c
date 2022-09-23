#include "main.h"
/**
 * _strcmp - the function that compares two strings
 * @s1: input 1
 * @s2: input 2
 * Return: 0 if both strings are equal, return (s1 - s2) if they are not equal
 */
int _strcmp(char *s1, char *s2)
{
	int m;

	for (m = 0; s1[m] != '\0' && s2[m] != '\0'; m++)
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
	}
	return (0);
}
