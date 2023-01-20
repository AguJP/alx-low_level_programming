#include "variadic_functions.h"

/**
 * sum_them_all - Variadic function to sum all arguments
 * @n: number of arguments
 * Return: Sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	sum = 0;
	for (i = 0, i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
