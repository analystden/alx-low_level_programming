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
	int i = 0, j = 0;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
	{
		if (i != j && i < j)
		{
		{
		putchar(i + '0');
		putchar(j + '0');

		if (i + j != 17)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
	putchar('\n');

	return (0);
}
