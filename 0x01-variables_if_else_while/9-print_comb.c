#include <stdio.h>
/**
 * main - Entry point, Prints combination of digits of base 10 Using putchar
 * Return: Always 0
 */

int main(void)
{
int m;
for (m = 0; m <= 9 ; m++)
{
putchar(m + '0');
if (m != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
