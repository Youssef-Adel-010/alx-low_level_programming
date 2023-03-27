#include "main.h"
/**
 * _strcpy - a function that copies the string pointed
 *
 * @dest: is a parameter.
 * @src: is a parameter.
 *
 * Return: alwaysreturn char.
*/
char *_strcpy(char *dest, char *src)
{
	int i  = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
