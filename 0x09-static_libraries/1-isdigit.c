#include "main.h"

/**
 * _isdigit - Function to check for digits
 * @c: variable to be checked for digit
 * Return: Always 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
