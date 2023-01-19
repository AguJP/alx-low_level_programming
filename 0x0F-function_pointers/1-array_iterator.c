#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function to execute function on each element of an array
 * @array: array passed
 * @size: size of the array
 * @action: pointer to function to be used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(a[i]);
	}
}
