#include "main.h"

/**
 * count_word - Helper function to count the no. of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int c, flag = 0, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}


/**
 * strtow - Function to split a string into words
 * @str: string to be split
 * Return: Pointer to array of strings if successfull, else NULL
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, words, start, end, k = 0, len = 0, c = 0;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
