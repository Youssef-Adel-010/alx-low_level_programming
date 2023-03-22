#include "main.h"

/**
 * main - Entry point
 *
 * Description: A c program that prints with put function
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
