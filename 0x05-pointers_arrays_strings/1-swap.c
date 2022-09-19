#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: int pointer type
 * @b: int pointer type
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
