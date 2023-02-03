#include "main.h"

/**
 * clear_bit - Function to set value of bit to 0 at a given index
 * @n: Number whose bit is to be cleared
 * @index: index of bit to clear
 * Return: 1 if successful, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
