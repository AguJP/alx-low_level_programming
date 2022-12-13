#include <stdio.h>
/**
 * main - Entry point, Prints combination of 2 digits Using putchar
 * Return: Always 0
 */

int main(void)
{
int m;
int n;
int p;
for (p = 0; p <= 9; p++)
{
for (m = 0; m <= 9 ; m++)
{
for (n = 0; n <= 9; n++)
{
if (!((m == n) || (m > n) || (m == p) || (p > m=)))
/* Eliminate repetition */
	{
	putchar(p + '0');
	putchar(m + '0');
	putchar(n + '0');
	if (p == 7 && m == 8 && n == 9)
	/* add commas and space if num is less than 789 */
	{
	;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
}
}
}
putchar('\n');
return (0);
}
