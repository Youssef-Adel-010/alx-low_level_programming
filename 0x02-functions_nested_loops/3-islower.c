#include "main.h"
/**
 *_islower - fuction that checkd if the char
 *           is lower or not
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' id lower and
 *         return 0 if not.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
