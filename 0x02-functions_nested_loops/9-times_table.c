#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
*/

void times_table(void)
{
	int c = 0, c2 = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j += c)
		{
			_putchar(c2);
			c2 += c;
			if (j != 9)
			{
				if (c2 <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			c++;
			c2 = 0;
			_putchar('$');
			_putchar('\n');
		}
		c++;
		_putchar('\n');
	}
}
