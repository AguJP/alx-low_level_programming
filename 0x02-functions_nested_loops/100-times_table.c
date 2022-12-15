#include "main.h"
/**
 * print_times_table - function to print the times table
 * Return: void
 * Description: function to print the times table
 * @n: the integer times table to be printed
 */

void print_times_table(int n)
{
	if ((n == 0) || (n > 15))
	{
		;
	}
	else
	{
		int num, mult, prod;

		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= n)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
