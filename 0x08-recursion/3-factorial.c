#include "main.h"

/**
 * factorial - Function to compute the factorial of a number
 * @n: integer whose factorial is to be determined
 * Return: Always 1
 */

int factorial(int n)
{
	int i = n;

	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	i *= factorial(n-1);

	return (i);

}
