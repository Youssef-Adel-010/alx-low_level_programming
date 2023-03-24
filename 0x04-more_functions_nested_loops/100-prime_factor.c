#include <stdio.h>
/**
 * main - the starting point.
 *
 * Return: always zero
*/

int main(void)
{
	long long int i, max, n = 612852475143;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	if (n != 1)
	    printf("%lld", n);
	return (0);
}
