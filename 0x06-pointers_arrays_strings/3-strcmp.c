#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * @s1: First string to compare
 * @s2: second string to compare
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
        {
                s1++;
                s2++;
        }

        return (*s1 - *s2);

}
