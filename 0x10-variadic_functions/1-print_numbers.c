#include "variadic_functions.h"

/**
 * print_numbers - Variadic function to print numbers
 * @separator: Pointer to string used as separator
 * @n: Number of integers supplied
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list = sum;
	unsigned int i;

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sum, int));

		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(sum);
}
