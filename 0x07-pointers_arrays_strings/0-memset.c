#include "main.h"

/**
 * _memset - Function to fill the first n-bytes of memory with constants
 * @s: pointer to a memory area
 * @b: constant byte to be filled
 * @n: number of bytes to be filled
 * Return: pointer to memory area s
 */

void *_memset(void *s. int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index ++)
		memory[index] = value;

	return (memory);
}
