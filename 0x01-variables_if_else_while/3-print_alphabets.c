#include <stdio.h>

/**
 * main - Entry Point
 *
 * Descripttion: printing alphabet in lowercase and uppercase using putchar
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*for lowercase alphabets*/

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*for uppercase alphabets*/

	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}

	putchar('\n');

	return (0);
}
