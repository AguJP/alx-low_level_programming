#include "main.h"

/**
 * *_strcat - Function to concatenate two strings
 * @src: string to be appended
 * @dest: string destination
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';

	return (dest);
}
