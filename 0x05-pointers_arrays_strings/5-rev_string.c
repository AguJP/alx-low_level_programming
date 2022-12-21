#include "main.h"

/**
 * rev_string - Function to reverse a string
 * @s: Pointer to a string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int k;
	int n;
	int temp;

	for (j = 0; s[j] != ('\0'); j++)
	{
		i++;
	}
	n = i - 1;

	for (k = 0; k < n; k++)
	{
		temp = s[k];
		s[k] = s[n];
		s[n] = temp;
		n--;
	}

}
