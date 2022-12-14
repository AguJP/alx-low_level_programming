#include "main.h"
/**
 * jack_bauer - function to print every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int n;
	for (n = 0; n < 60; n++)
	{
		for (m = 0; m < 60; m++)
		{
			if (n < 10)
			{
				_putchar('0');
			}
			_putchar(n + '0');
			if (m < 10)
			{
				_putchar(0);
			}
			_putchar(m + '0');
		}
	}
}
