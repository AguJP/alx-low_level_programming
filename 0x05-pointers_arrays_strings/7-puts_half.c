#include "main.h"

/**
 * puts_half - Function to print half of a string
 * @str: string variable
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;
	int j;
	int len;
	int n;
	int k;

	for (i = 0; str[i] != ('\0'); i++)
	{
		j++;
	}
	len = (j - 1);

	if ((len % 2) != 0)
	{
		n = ((len - 1) / 2);
	}
	else
	{
		n = (len / 2);
	}

	for (k = n; k < len; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');

}
