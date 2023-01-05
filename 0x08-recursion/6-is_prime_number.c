#include "main.h"

int is_prime_recursive(int n, int i);
int is_prime_number(int n);

/**
 * is_prime_recursive - helper function for is_prime_number
 * @n: number to be checked for prime
 * @i: number >= 3 used to check divisibility
 * Return: 1 for prime, else 0
 */

int is_prime_recursive(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2) == 0)
		return (0);
	if ((i * i) > n)
		return (1);
	if ((n % i) == 0)
		return (0);

	return (is_prime_recursive(n, i + 2));
}

/**
 * is_prime_number - Function to check for prime numbers
 * @n: number to be checked for prime
 * Return: Always 1
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 3));
}
