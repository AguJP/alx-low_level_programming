#include "main.h"

/**
 * print_most_numbers - Function to print numbers 0 to 9
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n == 2) || (n == 4))
		{
			;
		}
		else
		{
			_putchar (n + '0');
		}
	}
	_putchar ('\n');
}
