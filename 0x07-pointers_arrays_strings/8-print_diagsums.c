#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the function that prints sum of diagnals of a square matrix
 * @a: a 2d matrix
 * @size: the size of the matrix
 * Return: printed sums
 */
void print_diagsums(int *a, int size)
{
	int m, sum1, sum2, length;

	length = size * size;
	m = 0;
	sum1 = 0;
	sum3 = 0;

	while (m < length)
	{
		if (m % (size - 1) == 0 && m > 0 && m < (length - 1))
			sum2 += *(a + m);
		if (m % (size + 1) == 0)
			sum1 += *(a + m);
		m++;
	}
	printf("%d, %d\n", sum1, sum2);
}
