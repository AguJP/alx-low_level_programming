#include "main.h"

/**
 * malloc_checked - Function to allocate memory using malloc
 * @b: size of memory to be allocated in bytes
 * Return: pointer to allocated memory if successful, else 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
