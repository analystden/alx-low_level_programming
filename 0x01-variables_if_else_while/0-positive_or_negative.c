#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry Point
 *
 * Description: print positive, zero or negative
 *
 * Return: Always 0 (Success)
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if n > 0
					printf("is positive\n", n);
				else if n == 0
					printf("is zero\n", n);
				else
					printf("is negative\n", n);
					return (0);
}
