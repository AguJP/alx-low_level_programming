#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Function to select the correct arithmetic operation
 * @s: Arithmetic operator passed
 * Return: Pointer to the corresponding function.
 */

int (*get_op_func (char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while ((ops[i].op != NULL) && (*(ops[i].op) != *s))
		i++;

	return (ops[i].f);
}
