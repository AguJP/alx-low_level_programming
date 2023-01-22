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
	void *new_ptr;
	char *ptr1;
	char *old_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
	{
		return (ptr);
	}

	ptr1 = new_ptr;
	old_ptr = ptr;

	for (i = 0; i <= old_size; i++)
	{
		if (i <= new_size)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);

	return (ptr1);
}
