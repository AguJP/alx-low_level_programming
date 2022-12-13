#include "main.h"
/**
 * Return: 0 or 1
 * @c: variable to check for lower case
 * _islower -function to check for lowercase characters
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
