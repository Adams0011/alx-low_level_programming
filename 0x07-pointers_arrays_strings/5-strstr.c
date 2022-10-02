#include "main.h"
/**
 * *_strstr - the function that finds a substring in a string
 * @haystack: the string with all goodies
 * @needle: the substring to be found
 * Return: the matching substring
 * Else, return null
 */
char *_strstr(char *haystack, char *needle)
{
	char srch;
	char strt;

	while (*haystack != '\0')
	{
		strt = *haystack;
		srch = *needle;
		while (*needle != '\0' && *srch != '\0' && *srch == *haystack)
		{
			haystack++;
			srch++;
		}
		if (*srch == '\0')
			return (strt);
		haystack = strt + 1;
	}
	return (0);
}

