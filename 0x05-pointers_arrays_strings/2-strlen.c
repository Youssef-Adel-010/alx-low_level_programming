#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: is a parameter.
 *
 * Return: int the length.
*/
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
