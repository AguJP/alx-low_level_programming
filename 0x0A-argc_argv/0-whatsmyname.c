#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of program to print the name of a program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
