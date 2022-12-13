#include <stdio.h>
/**
 * main - Entry point, Prints in reverse alpha in lower case
 * Return: Always 0
 */

int main(void)
{
char m;
for (m = 'z'; m >= 'a'; m--)
{
putchar(m);
}
putchar('\n');
return (0);
}
