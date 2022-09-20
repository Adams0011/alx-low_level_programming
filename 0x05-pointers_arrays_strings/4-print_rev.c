#include "main.h"
/**
 * print_rev - the main function that print a string in reverse
 * @s: the pointer variable of char type that holds the string
 */
void print_rev(char *s)
{
	int count;

	int c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
		count++;
	}
	for (d = (count - 1); d >= 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}



