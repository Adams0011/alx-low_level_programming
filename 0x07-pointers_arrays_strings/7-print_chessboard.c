#include "main."
/**
 * print_chessboard - the function that prints chessboard
 * @a: the given array
 */
void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; c < 8; c++)
	{
		d = 0;
		while (d < 8)
		{
			_putchar(a[c][d]);
			d++;
		}
		_putchar('\n')
	}
}

