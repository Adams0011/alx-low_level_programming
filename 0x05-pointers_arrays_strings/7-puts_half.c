#include "main.h"
/**
 * puts_half - the main function that print half of a string
 * if length is odd, a = (length_of_the_string - 1) / 2
 * @str: pointer variable to hold that will hold the user input
 * Return: half of the input from the user
 */
void puts_half(char *str)
{
	int b, a, length;

	length = 0;

	for (b = 0; str[b] != '\0'; b++)
	{
		length++;
	}
	a = (length / 2);

	if ((length % 2) == 1)
	{
		a = ((length + 1) / 2);
	}

	for (b = a; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
