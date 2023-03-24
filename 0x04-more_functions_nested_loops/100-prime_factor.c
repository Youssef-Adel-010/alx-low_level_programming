#include <stdio.h>
/**
 * main - the starting point.
 *
 * Return: always zero
*/

long long greatest_prime_factor(long long num) 
{
	long long factor = 2;
	while (num > factor)
	{
		if (num % factor == 0) 
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}
	return factor;
}

int main(void)
{
	long long num = 612852475143;
	long long result = greatest_prime_factor(num);
	printf("%lld\n", result);
	return 0;
}
