#include "main.h"

/**
 * _memset - Helper function to fill memory with a constant byte
 * @s: memory area to set
 * @b: character to copy
 * @n: number of times to copy b
 * Return: Pointer to s (memory area)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}


/**
 * _calloc - Fuction to allocate memory for an array using malloc
 * @nmemb: number of array elements
 * @size: size of array type
 * Return: Pointer to array if successful, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
