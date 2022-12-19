#include "main.h"

/**
 * print_diagonal - Function to draw a diagonal line
 * @n: Number of times to draw the character \
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
	{
		_putchar('\n');
	}
	else if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
