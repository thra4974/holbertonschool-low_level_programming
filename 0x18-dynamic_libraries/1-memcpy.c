#include "holberton.h"

/**
 * _memcpy - function copies memory area.
 * @dest: pointer to destination memory area.
 * @src: pointer to source area.
 * @n: number of bytes to be copied from src to dest.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
