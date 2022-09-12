#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet, ban, bann;

	ban = 'e';
	bann = 'q';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet != ban && alphabet != bann)
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
