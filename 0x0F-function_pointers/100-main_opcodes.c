#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function to print opcodes of main
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successfull, else 1 or 2
 */

int main(int argc, char **argv)
{
	int num_bytes;
	int i;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (unsigned char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", main_ptr[i]);
			break;
		}
		printf("%02hhx", main_ptr[i]);
	}
	printf("\n");

	return (0);
}
