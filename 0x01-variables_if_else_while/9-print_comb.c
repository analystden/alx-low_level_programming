#include <stdio.h>

/**
 * main - Entry Point
 *
 * Descripttion: prints single digits separated by comma
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
