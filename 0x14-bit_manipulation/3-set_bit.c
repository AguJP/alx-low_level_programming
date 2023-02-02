#include "main.h"

/**
 * set_bit - Function to set value of a bit to 1 at a given index
 * @n: pointer to integer number
 * @index: index of bit to set
 * Return: 1 if successful, else 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	n[index] = 1;
	return (1);
}
