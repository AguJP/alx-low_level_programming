#include "main.h"

/**
 * _strpbrk - Function to search a string for any set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string whose bytes are to be searched in s
 * Return: pointer to byte in s matching one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');

}
