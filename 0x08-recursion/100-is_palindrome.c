#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be checked.
 * Return: the length of @s.
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome.
 * @s: string to be checked.
 * @len: length of @s.
 * @i: index of the string to be checked.
 * Return: 1 if the string is a palindrome. Otherwise 0.
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string to be checked.
 * Return: 1 if the string is a palindrome. Otherwise 0.
 */
int is_palindrome(char *s)
{
	int i = 0;

	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
