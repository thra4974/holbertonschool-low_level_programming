#include "holberton.h"
/**
 * _strncat - function concat two strings with n bytes from src.
 * @dest: destination.
 * @src: source string.
 * @n: max byte count from source to concat.
 * Return: pointer to resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] = n)
	{
		dest[i] = src [i];
		src++;
		dest++;
	}
	return (dest);
}