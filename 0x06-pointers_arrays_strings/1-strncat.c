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

	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while ((n > 0) && (*src != '\0'))
	{
		*p = *src;
		p++;
		src++;
		n--;
	}

	*p = '\0';

	return (dest);
}
