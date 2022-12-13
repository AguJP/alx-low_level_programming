#include <stdio.h>
/**
 * main - Entry point, Prints digits of base 10 Using putchar function
 * Return: Always 0
 */

int main(void)
{
int m;
for (m = 0; m <= 9 ; m++)
{
putchar((m % 10) + '0');
}
putchar('\n');
return (0);
}
