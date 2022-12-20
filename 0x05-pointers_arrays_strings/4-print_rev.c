#include "main.h"

/**
 * print_rev - Function to print a string in reverse to stdout
 * @s: Pointer to a string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i = 0;
	int j;
	int k;

	for (j = 0; s[j] != ('\0'); j++)
	{
		i++;
	}

	for (k = (i - 1); k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
