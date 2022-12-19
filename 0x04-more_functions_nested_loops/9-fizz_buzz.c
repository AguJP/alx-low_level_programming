#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Description: Program to print integers 1 - 100, with Fizz, Buzz and FizzBuzz
 * for multiples of 3, 5 and 15 respectively
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i == 99)
		{
			;
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}
