#include "main.h"

/**
 * *_strncat - Function to concatenate n bytes of two strings
 * @src: string to be appended
 * @dest: string destination
 * @n: maximum byte to concatenate
 * Return: A pointer to the destination string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while ((i < n) || (*src != '\0'))
	{
		*p = *src;
		p++;
		src++;
		i++;
	}

	*p = '\0';

	return (dest);
}
