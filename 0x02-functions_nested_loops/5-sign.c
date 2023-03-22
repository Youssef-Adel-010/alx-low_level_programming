#include "main.h"

/**
 * print_sign - function that prints the sign of the number
 *
 * @n: checks the input of the function
 *
 * Return: returns 1 if positive and -1 if negative
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
