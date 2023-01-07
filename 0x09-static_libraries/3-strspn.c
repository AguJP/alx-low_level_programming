#include "main.h"

/**
 * _strspn - Function to get the length of a prefix substring
 * @s: pointer to string character
 * @accept: pointer to string whose bytes is to be determined
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p;
	char *a;
	unsigned int count = 0;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*p == *a)
				break;
		}
		if (*a == '\0')
			return (count);
		++count;
	}

	return (count);
}
