#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: is the number of times the character
 *
*/

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
