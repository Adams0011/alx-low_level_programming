#include "main.h"

/**
*print_triangle - a function that prints triangle
*@size: size of the triangle
*Return: triangle of '#'s
*/
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= (size - 1); ++)
		{
			for (b = 0; b < (size - 1) - a; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
