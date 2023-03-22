#include "main.h"

/**
 * print_alphabet - prints alphabet from a - z then prints a new line
 *
*/

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
