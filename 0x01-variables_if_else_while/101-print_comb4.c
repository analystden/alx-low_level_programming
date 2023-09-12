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
	int i = 0, j = 0, k = 0;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
	{
		if (i != j && i < j && j != k && k < j)
		{
			{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');

			if (i + j + k != 24)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	}
	putchar('\n');

	return (0);
}
