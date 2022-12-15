#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function to print a number to 98
 * @n: integer to start printing
 * Description: Function to print a number to 98
 * Return: Always 0
 */

void print_to_98(int n)
{
	int m;

	for (m = n; m <= 98; m++)
	{
		printf("%d", m);
		if (m < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
