#include <stdio.h>
/**
 * main - Entry point, Prints combination of 2 digits Using putchar
 * Return: Always 0
 */

int main(void)
{
int m;
int n;
for (m = 0; m <= 9 ; m++)
{
for (n = 0; n <= 9; n++)
{
if (!((m == n) || (m > n)))
	{
	putchar(m + '0');
	putchar(n + '0');
	if (m == 8 && n == 9)
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
putchar('\n');
return (0);
}
