#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: is a pointer parameter
 *
 * @b: is a pointer parameter
 *
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
