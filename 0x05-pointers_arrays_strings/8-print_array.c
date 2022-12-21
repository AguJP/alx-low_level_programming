#include "main.h"

/**
 * print_array - Function to print n elements of an array of int
 * @a: Array element
 * @n: Number of array elements to print
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");
	}

	printf("\n");
}
