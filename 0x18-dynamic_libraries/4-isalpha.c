#include "main.h"
/**
 * _isalpha - Function to check for alphabet character
 * @c: character to check for
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
