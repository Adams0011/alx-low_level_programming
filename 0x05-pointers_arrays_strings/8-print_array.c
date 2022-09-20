#include <stdio.h>
#include "main.h"
/**
 * print_array - the main function that prints n elements of an array
 * @a: pointer to the array
 * @n: is number of the element of the array to be printed
 * Return: both a and n inputs as given
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)

	{
		if (l == 0)
		{
			printf("%d", a[l]);
		}
		else
		{
			printf(", %d", a[l]);
		}
	}

	printf("\n");
}
