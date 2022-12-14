#include "main.h"
/**
 * print_last_digit - function to print the last digit of a number
 * @n: parameter to print last digit
 * Return: Always 0
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');

	return (n);
}
