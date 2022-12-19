#include "main.h"

/**
 * print_triangle - function to print a triangle
 * @size: size of triangle
 * Return: a triangle of '#'s
 */

void print_triangle(int size)
{
	int i;
	int j;
	int m;

	if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (m = 0; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
