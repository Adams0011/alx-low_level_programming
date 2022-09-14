#include "main.h"
/**
 * print_alphabet_x10 - the function
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alph;

	while (i < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
