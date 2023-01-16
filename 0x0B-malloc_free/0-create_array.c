#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * create_array - Function to create an array of initialized chars
 * @size: number of bytes to be allocated
 * @c: char to be initialized with
 * Return: Pointer to array if successful, else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = (char *) malloc(sizeof(c) * size);
	if ((a == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);

}
