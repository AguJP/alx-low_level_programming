#include "main.h"

/**
 * _strlen_recursion - Function to return length of a string
 * @s: pointer to string
 * Return: Always 1
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
