#include "main.h"

/**
 * *_strcat - Function to concatenate two strings
 * @src: string to be appended
 * @dest: string destination
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (dest != '\0')
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

	return dest;
}
