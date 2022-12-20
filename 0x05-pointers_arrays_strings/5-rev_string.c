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

	for (j = 0; s[j] != ('\0'); j++)
	{
		i++;
	}

	char t[i];

	for (k = (i - 1); k >= 0; k--)
	{
		t[k] = s[k];
	}

	*s = t;
}
