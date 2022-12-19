#include "main.h"

/**
 * print_square - Function to print a square
 * @size: Size of the square in #
 * Return: Always 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
	{
		_putchar('\n');
	}
	else if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
