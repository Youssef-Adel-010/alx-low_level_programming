#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c:  checks for alphabetic character
 *
 * Return: return 1 if the char is alphabetic char
 *         and 0 othewise.
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
