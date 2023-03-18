#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that prints with put function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (n == 980)
		printf("Last digit of 980 is 0 and is 0\n");
	else if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (n == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
