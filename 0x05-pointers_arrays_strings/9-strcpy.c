#include "main.h"

/**
 * *_strcpy - Function to copy string pointed to by src to dest
 * @src: string variable
 * @dest: destination buffer variable
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = 0;
	int k;

	for (i = 0; i != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0'

	return (dest);
}
