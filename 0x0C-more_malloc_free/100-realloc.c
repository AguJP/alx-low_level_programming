#include "main.h"

/**
 * _realloc - Function to reallocate a memory block using malloc and free
 * @ptr: Pointer to previously allocated memory
 * @old_size: size of previously allocated memory
 * @new_size: size of newly allocated memory block
 * Return: Pointer to new memory if successful, else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr1;
	char *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		return (malloc(new_size));
	}

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);

	if (!ptr1)
	{
		return (NULL);
	}

	old_ptr = ptr;

	for (i = 0; i < old_size; i++)
	{
		if (i < new_size)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);

	return (ptr1);
}
