#include "main.h"

/**
 * _strdup - Function to duplicate a string and return pointer to duplicate
 * @str: string to duplicate
 * Return: pointer to duplicate if successfull, else NULL
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;
	dst = malloc(sizeof(char) * (len + 1));

	if (dst == NULL)
		return (NULL);
	while ((dst[i] = str[i]) != '\0')
		i++;

	return (dst);

}
