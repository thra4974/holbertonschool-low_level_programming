#include "holberton.h"

/**
 * *_strncpy - function copies a string.
 * @dest: pointer to destination.
 * @src: pointer to src.
 * @n: n bytes.
 * Return: pointer to resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
