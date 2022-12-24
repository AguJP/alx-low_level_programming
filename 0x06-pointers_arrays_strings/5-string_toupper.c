#include "main.h"

/**
 * string_toupper - Function to change lowercase to uppercase in a string
 * @str: string variable
 * Return: String with lowercases changed to upper
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 32;
		}
	}

	return (str);
}
