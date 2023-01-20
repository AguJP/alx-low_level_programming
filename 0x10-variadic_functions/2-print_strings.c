#include "variadic_functions.h"

/**
 * print_strings - Variadic function to print strings
 * @separator: Pointer to string used as separator
 * @n: Number of strings supplied
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	char s;

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(sum, char);

		if (s != NULL)
		{	printf("%s", s);
		}
		else
			printf("(nil)");

		if ((i != (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(sum);
}
