#include "main.h"

/**
 * get_bit - Function to return value of a bit at an index
 * @n: integer number supplied
 * @index: index of the bit to be checked
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
