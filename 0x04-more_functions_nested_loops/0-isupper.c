#include "main.h"

/**
 * _isupper - Function to check for upper case characters
 * @c: variable to be checked for upper case
 * Return: Always 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
