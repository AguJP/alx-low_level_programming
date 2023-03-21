#include "main.h"

/**
 * *_strncpy - Function to copy string
 * @src: string to be copied
 * @dest: string destination
 * @n: maximum byte to copy
 * Return: A pointer to the destination string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	char *p = dest;

	while ((n > 0) && (*src != '\0'))
	{
		*p = *src;
		p++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}

	return (dest);
}
