#include "function_pointers.h"

/**
 * int_index - Function to search for an integer
 * @array: Array of int passed
 * @cmp: Pointer to function to be used to compare values
 * @size: Number of elements in the array
 * Return: index if successful, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
