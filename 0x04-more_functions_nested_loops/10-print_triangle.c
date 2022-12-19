#include "main.h"

/**
 * print_triangle - Function to draw a triangle
 * @size: size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size < 1)
	{
		_putchar('\n');
	}
	else if (size >= 1)
	{
		for (i = 1; i < (size + 1); i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			while (i)
			{
				_putchar('#');
				i--;
			}
			_putchar('\n');
		}
	}
}
