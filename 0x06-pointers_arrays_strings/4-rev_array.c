#include "main.h"
/**
 * reverse_array - the funtion that reverses the given arrays of integers
 * @a: the pointer to the address memory of arrays
 * @n: the number of elements of arrays
 */
void reverse_array(int *a, int n)
{
	int b;
	int swp;

	for (b = 0; b < n / 2; b++)
	{
		swp = a[b];
		a[b] = a[(n - 1) - b];
		a[(n - 1) - b] = swp;
	}
}
