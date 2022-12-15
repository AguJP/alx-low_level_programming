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
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	if (n == 98)
		printf("%d\n", n);
}
