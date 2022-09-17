#include<stdio.h>
/**
* main - Entry point
* listing data types and modifiers with their aguments as variables
* sizeof evaluates the sizes of the data types and modifiers
* Return: 0 once successful
*/
int main(void)
{
	char chartype;
	int inttype;
	long int a;
	long long int b;
	float floattype;

	printf("size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("size of a long int: %d byte(s)\n", sizeof(a));
	printf("size of a long long int: %d byte(s)\n", sizeof(b));
	printf("size of a float: %zu bytes(s)\n", sizeof(floattype));

	return (0);
}
