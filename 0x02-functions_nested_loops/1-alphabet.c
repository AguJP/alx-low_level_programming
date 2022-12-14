#include "main.h"
/**
 * main - Entry point
 * Description: Program to print alphabet in lower case
 * Return: void
 */

void print_alphabet(void)
{
char A;
for (A = 'a'; A <= 'z'; A++)
{
_putchar(A);
}
_putchar('\n');
}
