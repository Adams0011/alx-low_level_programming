#include "main.h"
/**
 * _puts - the main fuction that prints the string to stdout
 * @str: pointer variable for char type which holds the string
 */
void _puts(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
