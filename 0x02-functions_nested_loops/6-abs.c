#include "main.h"
/**
 * _abs - function to print the absolute value of an integer
 * @n: parameter to check for absolute value
 * Return: Always 0
 */
int _abs(int)
{
	int n;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n);
	return (0);
}
