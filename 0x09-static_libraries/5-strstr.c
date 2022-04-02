#include "main.h"

/**
 * _strstr - this function locates a substring.
 * @haystack: string to be searched.
 * @needle: substring to be located.
 * Return: A pointer to the start of the substring
 * if located. Otherwise NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
