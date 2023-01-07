#include "main.h"

/**
 * _puts - Function to print a string to stdout
 * @str: Pointer to a string
 * Return: Always 0
 */

void _puts(char *str)
{
	int c;

	while ((c = *str++))
	{
		_putchar (c);
	}
	_putchar ('\n');

}
