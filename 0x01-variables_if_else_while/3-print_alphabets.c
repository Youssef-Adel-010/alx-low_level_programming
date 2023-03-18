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
	for (char i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (char i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
}
