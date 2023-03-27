#include "main.h"

/**
 * rev_string -  function that reverses a string.
 *
 * @s: is the string.
 *
*/
void rev_string(char *s)
{
	int l, i;
	char tmp;

	while (s[i])
	{
		l++;
	}
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
