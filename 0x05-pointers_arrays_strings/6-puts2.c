#include "main.h"
/**
 * puts2 - function should omly print one character out of two
 * @str: the pointer variable hold the user input
 * Return: printed character
 */
void puts2(char *str)
{
	int b;

	b = 0;
	for (; str[b] != '\0'; b++)
	{
		if ((b % 2) == 0)
		{
			_putchar(str[b]);
		}
		else
			continue;
		}
	}
	_putchar('\n');
}

