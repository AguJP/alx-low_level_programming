#include <stdio.h>
/**
 * main - Entry point, Prints lowercase digits of base 16 Using putchar
 * Return: Always 0
 */

int main(void)
{
int m;
char n;
for (m = 0; m <= 9 ; m++)
{
putchar((m % 10) + '0');
}
for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
