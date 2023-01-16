#include "main.h"
0;276;0c
/**
 * _strdup - Function to duplicate a string and return pointer to duplicate
 * @str: string to duplicate
 * Return: pointer to duplicate if successfull, else NULL
 */

char *_strdup(char *str)
{
	int len = 0;
	char *a = str;
	char *dup;
	char *a1;
	char *a2;

	while (*a++ != '\0')
	{
		len++;
	}

	dup = (char *)malloc(len + 1);

	if ((dup == 0) || (dup == NULL))
	{
		return (NULL);
	}

	a1 = dup;
	a2 = str;

	while (*a2 != '\0')
	{
		*a1++ = *a2++;
	}
	*a1 = '\0';

	return (dup);
}
