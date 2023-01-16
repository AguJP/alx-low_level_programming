#include "main.h"

/**
 * alloc_grid - Function to return pointer to an initialized 2D array
 * @width: width of array
 * @height: height of array
 * Return: Pointer to array if successful, else NULL
 */

int **alloc_grid(int width, int height)
{
	int **matrx;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrx = (int **) malloc(sizeof(int *) * height);

	if (matrx == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrx[i] = (int *) malloc(sizeof(int) * width);
		if (matrx[i] == NULL)
		{
			free(matrx);
			for (j = 0; j <= i; j++)
				free(matrx[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrx[i][j] = 0;
		}
	}

	return (matrx);
}
