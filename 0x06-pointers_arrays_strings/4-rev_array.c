#include "main.h"
/**
 * reverse_array - the funtion that reverses the given arrays of integers
 * @a: the pointer to the address memory of arrays
 * @n: the number of elements of arrays
 */
void reverse_array(int *a, int n)
{
	int a;
	int swp;

	for (a = 0; a < n / 2; a++)
	{
		swp = a[a];
		a[a] = a[(n - 1) - a];
		a[(n - 1) - a] = swp;
	}
}
