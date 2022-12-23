#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * @s1: First string to compare
 * @s2: second string to compare
 * Return: If str1 < str2, the negative diff of first unmatched char
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while ((*s1) && (*s2) && (*s1 == *s2))
        {
                s1++;
                s2++;
        }

        i = (*s1 - *s2);

	return (i);
}
