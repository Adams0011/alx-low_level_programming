#include <unistd.h>
#include "main.h"
/**
 * _putchar write the given character to stdout
 * @c: The given character
 * Return: Awlays 0 (successful)
 * 
 * on error,-1 is return , and erro appropriatly
 */
int _putchar(char c)
{
	return (write(1, &c 1));
}
