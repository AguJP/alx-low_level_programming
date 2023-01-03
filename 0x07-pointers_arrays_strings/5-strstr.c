#include "main.h"

/**
 * _strstr - Function to locate a substring
 * @haystack: pointer to string to be searched
 * @needle: pointer to substring to be located in haystack
 * Return: pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (needle[i + 1] == '\0')
				return (haystack);
		}

		haystack++;
	}

	return ('\0');

}
