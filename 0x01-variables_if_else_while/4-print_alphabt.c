#include <stdio.h>

/**
 * main - Entry Point
 *
 * Descripttion: prints all alphabet in lowercase except e and q using putchar
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		if (ch =='e' || ch =='q')
			++ch;
		putchar(ch);
		++ch;
	}

	putchar('\n');

	return (0);
}
