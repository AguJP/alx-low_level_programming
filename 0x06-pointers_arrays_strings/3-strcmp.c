#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * @s1: First string to compare
 * @s2: second string to compare
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s2 > *s1)
		{
			return (-1);
		}

		s1++;
		s2++;
	}

	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
