#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	printf("size of char: %d byte(s)\n", sizeof(char));
	print("size of int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d byte(s)\n", sizeof(long int));
	printf("size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of float: %d bytes(s)\n", sizeof(float));
	return (0);
}
