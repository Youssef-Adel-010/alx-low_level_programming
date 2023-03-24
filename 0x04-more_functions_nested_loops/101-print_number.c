#include "main.h"
/**
 * print_number -  function that prints an integer.
 *
 * @n: is the integer
*/

void print_number(int n)
{
	int last, main,  rev = 0;
	char flag = 'n';

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	main = n;
	while (main)
	{
		last = main % 10;
		rev *= 10;
		rev += last;
		main = main / 10;
	}
	if (rev < 0)
	{
		flag = 'y';
		rev *= -1;
	}
	if (flag == 'y')
	{
		_putchar('-');
	}
	while (rev)
	{
		last = rev % 10;
		_putchar(last + '0');
		rev = rev / 10;
	}
}
