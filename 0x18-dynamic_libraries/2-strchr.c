#include "main.h"

/**
 * _strchr - Function to locate a character in a string
 * @s: pointer to the memory to be searched
 * @c: character to be located
 * Return: a pointer to first occurance of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *j = s;

	while (j[i] >= '\0')
	{
		if (j[i] == c)
			return (j + i);
		i++;
	}

	return ('\0');
}
