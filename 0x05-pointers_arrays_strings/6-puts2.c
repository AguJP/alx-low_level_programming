#include "main.h"

/**
 * puts2 - Function to print every other character of a string
 * @str: string variable
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;
	int j = 0;
	int n;
	int k;

	for (i = 0; str[i] != ('\n'); i++)
	{
		j++;
	}

	n = (j - 1);

	for (k = 0; k < n; k++)
	{
		if ((k % 2) == 0)
		{
			printf("%d", str[k]);
		}
	}

	printf("\n");

}
