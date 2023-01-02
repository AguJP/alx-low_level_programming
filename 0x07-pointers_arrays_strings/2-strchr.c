#include "main.h"

/**
 * _strchr - Function to locate a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: a pointer to first occurance of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		else
			i++;
	}
	return (NULL);
}
