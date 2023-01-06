#include "main.h"

int _strlen(char *s);
int is_palindrome_recursive(char *s, int start, int end);
int is_palindrome(char *s);

/**
 * _strlen - Function to compute string length recursively
 * @s: pointer to string
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (*(s + i))
	{
		i++;
		i += _strlen(s + i);
	}

	return (i);
}

/**
 * is_palindrome_recursive - Helper function to check for palindrome
 * @s: pointer to string
 * @start: first index of string
 * @end: last index of string
 * Return: 1 if string is a palindrome, else 0
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Function to check for palindrome
 * @s: pointer to string
 * Return: 1 if string is a palindrome, else 0
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s);
	return (is_palindrome_recursive(s, 0, i - 1));
}
