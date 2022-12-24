#include "main.h"

/**
 * reverse_array - Function to reverse the content of an array of integers
 * @a: Integer array
 * @n: number of elements of the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
