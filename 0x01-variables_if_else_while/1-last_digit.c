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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;
	char words[] = " ";

	if (n > 5)
		words = "and is greater than 5";
	else if (n < 6 && n != 0)
		words = "and is less than 6 and not 0";
	else if (n == 0)
		words = "and is 0";
	printf("Last digit of %i is %i %s\n", n, last, words);
	return (0);
}
