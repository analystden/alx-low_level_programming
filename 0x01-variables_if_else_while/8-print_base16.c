#include <stdio.h>

/**
 * main - Entry Point
 *
 * Descripttion: printing alphabet in lowercase using putchar
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	char hexDigits[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexDigits[i]);
		++ch;
	}
	putchar('\n');

	return (0);
}
