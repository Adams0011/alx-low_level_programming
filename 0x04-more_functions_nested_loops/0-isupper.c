#include "main.h"
/**
 * _isupper - main function
 * @c: the given variable
 * Return: 1 if it is uppercase
 * otherwise, return 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
