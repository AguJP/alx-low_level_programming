#include <stdio.h>
/**
 * main - Entry point, Prints combination of two 2-digit numbers Using putchar
 * Return: Always 0
 */

int main(void)
{
int m;
int n;
for (m = 0; m < 100 ; m++)
{
for (n = 0; n < 100; n++)
{
if (m < n)
	{
	putchar((m / 10) + 48);
	putchar((m % 10) + 48);
	putchar(' ');
	putchar((n / 10) + 48);
	putchar((n % 10) + 48);
	if (m == 98 || n == 99)
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
