#include "main.h"
/**
 * _isalpha - main function
 * @c: the variable given
 * Return: 1 once success
 * Return 0 if therwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
