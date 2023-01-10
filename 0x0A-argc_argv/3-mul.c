#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of program to print product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, else 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, j;

		i = atoi(argv[1]);
		j = atoi(argv[1]);
		printf("%d\n", i * j);
		return (0);
	}
}
