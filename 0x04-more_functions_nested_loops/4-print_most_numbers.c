#include "main.h"
/**
* print_most_numbers - main
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i == '2') || (i == '4'))
		{
			continue;
			i++;
		}
		else
		{
		_putchar(i);
		}

	}
	_putchar('\n');
}
