#include "main.h"
/**
 * *_strstr - the function that finds string inside string
 * @haystack: the string with all goodies
 * @needle: the string to be found
 * Return: the matching substring
 * Else, return null
 */
char *_strstr(char *haystack, char *needle)
{
	char srch;
	char strt;

	while (*haystack != '\0')
	{
		strt = haystack;
		srch = needle;
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
#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}

