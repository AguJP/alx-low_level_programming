#include <stdio.h>
/**
 * main - Entry point, Prints alpha in lower case and upper case
 * Return: Always 0
 */

int main(void)
{
char m;
char n;
for (m = 'a'; m <= 'z'; m++)
{
putchar(m);
}
for (n = 'A'; n <= 'Z'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
