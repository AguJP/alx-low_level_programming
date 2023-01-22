#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function to write a character to stdout
 * @c: Character to print
 * Return: 1 if successful else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
