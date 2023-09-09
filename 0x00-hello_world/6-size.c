#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripttion: A C program to print sizes of various types on the computer
 *
 * Return: Alwasy 0 (Success)
 *
 */

int main(void)
{
	/*sizeof is used to determine the sizes of various data types*/

	printf("Size of a char: %lu byes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of a float: %lu bytes\n", sizeof(float));

	return (0);
}
