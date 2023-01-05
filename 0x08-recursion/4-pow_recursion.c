#include "main.h"

/**
 * _pow_recursion - Function to return the value of x raised to power y
 * @x: base value
 * @y: exponent value
 * Return: Always 1
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	i *= _pow_recursion(x, y - 1);

	return (i);
}
