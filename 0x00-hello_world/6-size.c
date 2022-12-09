/* Program to print size of different types */
#include <stdio.h>
#include <stddef.h>
/**
 * main - Entry point
 *
 * Description: Program prints the size of different types in bytes
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int c = sizeof(char);
int i = sizeof(int);
int l = sizeof(long int);
int ll = sizeof(long long int);
int f = sizeof(float);

printf("Size of a char: %d byte(s)\n", c);
printf("Size of an int: %d byte(s)\n", i);
printf("Size of a long int: %d byte(s)\n", l);
printf("Size of a long long int: %d byte(s)\n", ll);
printf("Size of a float: %d byte(s)\n", f);
/* Program to return 0 (Success) */
return (0);
}
