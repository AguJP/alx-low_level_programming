#include "main.h"

/**
 * get_endianness - Function to check if machine is little or big endian
 * Return: 0 if big-endian, else 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
