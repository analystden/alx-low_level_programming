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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
