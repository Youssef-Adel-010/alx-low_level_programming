#include "main.h"

/**
 * main - Entry point
 *
 * Description: A c program that prints with put function
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char c = 'a'; 

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

}
