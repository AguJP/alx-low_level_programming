#include "variadic_functions.h"

/**
 * print_all - Variadic function to print all supplied inputs
 * @format: list of types of arguments passed to the function
 * Returns: void
 */

void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0;
	char *str, *sep = "";

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(all, int));
				break;
			case  'i':
				printf("%s%d", sep, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
			}
			sep =  ", ";
			i++;
		}
	}

	printf("\n");
	va_end(all);
}
