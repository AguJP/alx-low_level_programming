#include "main.h"

/**
 * print_line - Function to print line n times
 * @n: Number of times to print the character _
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
