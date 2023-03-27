#include "main.h"
/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s: is a parameter
*/
void print_rev(char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}
	while (c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
