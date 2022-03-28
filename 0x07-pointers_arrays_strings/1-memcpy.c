#include "main.h"

/**
 * _memcpy - this function copies memory area
 * @dest: pointer to destination object
 * @src: pointer to source object
 * @n: number of bytes to copy
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *pSource = src;
	
	if ((p != NULL) && (pSource != NULL))
	{
		while(n)
		{
			*(p++) = *(pSource++);
			--n;
		}
	}
	return (dest);
}
