#include "main.h"

/**
 * _strdup - Function to duplicate a string and return pointer to duplicate
 * @str: string to duplicate
 * Return: pointer to duplicate if successfull, else NULL
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);

	return (dst);

}
