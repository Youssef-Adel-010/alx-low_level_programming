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
	char sm = 'a';
	char cp = 'A';

	while (sm <= 'z')
	{
		putchar(sm);
		sm++;
	}
	while (cp <= 'Z')
	{
		putchar(cp);
		cp++;
	}
	putchar('\n');
	return (0);
}
