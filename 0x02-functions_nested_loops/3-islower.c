#include "main.h"
/**
 * @c: variable to check for lower case
 * _islower - Entry point
 * Description: function to check for lowercase characters
 * return: 1 for success otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
