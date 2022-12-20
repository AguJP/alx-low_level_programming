#include "main.h"

/**
 * swap_int - Function to swap value of two integers
 * @a: Pointer to an int variable
 * @b: Pointer to an int variable
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
