#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * is_valid_num - Program to check for number
 * @str: string to be checked for number
 * Return: Always 0
 */

int is_valid_num(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}


/**
 * main - Entry point of prog. to print min. no. of coins for change
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}


	if (!is_valid_num(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		while (i >= 25)
		{
			i -= 25;
			sum++;
		}
		while (i >= 10)
		{
			i -= 10;
			sum++;
		}
		while (i >= 5)
		{
			i -= 5;
			sum++;
		}
		while (i >= 2)
		{
			i -= 2;
			sum++;
		}
		while (i >= 1)
		{
			i -= 1;
			sum++;
		}

		printf("%d\n", sum);
	}
}
