#include "main.h"

/**
 * _memcpy - Function to copy bytes from memory src to dest
 * @dest: the destination area of memory
 * @src: the source of memory to be copied
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
		*d++ = *s++;
	return(dest);
}
