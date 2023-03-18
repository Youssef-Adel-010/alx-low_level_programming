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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
