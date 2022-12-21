#include "main.h"

/**
 * puts_half - Function to print half of a string
 * @str: string variable
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;
	int j = 0;
	int n;
	int k;

	for (i = 0; str[i] != ('\0'); i++)
	{
		j++;
	}
	n = (j / 2);

	if ((j % 2) == 1)
	{
		n++;
	}

	for (k = n; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');

}
