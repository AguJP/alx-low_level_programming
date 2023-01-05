#include "main.h"

/**
 * _puts_recursion - Function to print a string
 * @s: pointer to string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(*s++);
	}
	else
		putchar('\n');
}
