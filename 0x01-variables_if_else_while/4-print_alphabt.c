#include <stdio.h>
/**
 * main - Entry point, Prints alpha in lower case except q and e
 * Return: Always 0
 */

int main(void)
{
char m;
for (m = 'a'; m <= 'z'; m++)
{
if (m == 'q')
;
else if (m == 'e')
;
else
putchar(m);
}
putchar('\n');
return (0);
}
