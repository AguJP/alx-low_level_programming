#include "main.h"

/**
 * _memset - Function to fill the first n-bytes of memory with constants
 * @s: pointer to a memory area
 * @b: constant byte to be filled
 * @n: number of bytes to be filled
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *memarea = s;
	unsigned char value = b;

	while (n--)
	{
		*memarea++ = value;
	}

	return (memarea);
}
