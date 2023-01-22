#include "main.h"

/**
 * array_range - Function to create an array of integers
 * @min: minimum value of integer
 * @max: maximum value of integer
 * Return: Pointer to new array if successfull, else NULL
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (!p)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
