#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);



/**
 * op_add - function to add two integers
 * @a: First integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Function to subtract an integer from another
 * @a: First integer
 * @b: Second integer
 * Return: Difference of b from a
 */

int op_sub(int a, int b)
{
        return (a - b);
}


/**
 * op_mul - Function to multiply two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
        return (a * b);
}


/**
 * op_div - Function to divide two integers
 * @a: First integer
 * @b: Second integer
 * Return: quotient of a divided by b
 */

int op_div(int a, int b)
{
        return (a / b);
}


/**
 * op_mod - Function to determine modulo of two integers
 * @a: First integer
 * @b: Second integer
 * Return: a modulo b
 */

int op_mod(int a, int b)
{
        return (a % b);
}
