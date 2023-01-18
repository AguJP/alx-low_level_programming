#include "function_pointers.h"

/**
 * print_name - Function to print name using a function pointer
 * @f: function pointer
 * @name: name to be printed
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
