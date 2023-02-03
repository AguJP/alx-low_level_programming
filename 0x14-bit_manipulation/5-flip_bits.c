#include "main.h"

/**
 * flip_bits - Function to return no. of bits to flip to get from one no. to another
 * @n: Integer no.
 * @m: no. to get to after flipping bits
 * Return: no. of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
