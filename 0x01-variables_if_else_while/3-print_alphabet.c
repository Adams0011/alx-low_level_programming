#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 is successful
 */
int main(void)
{
	char alphabet1;
	char alphabet2;

	for (alphabet1 = 'a'; alphabet1 <= 'z'; alphabet1++)
	{
		putchar(alphabet1);
	}
	for (alphabet2 = 'A'; alphabet2 <= 'Z'; alphabet2++)
	{
		putchar(alphabet2);
	}
	putchar('\n');
	return (0);
}
