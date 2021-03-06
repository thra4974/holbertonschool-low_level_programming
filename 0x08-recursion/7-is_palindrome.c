#include "holberton.h"

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: pointer to a string.
 * Return: 1 if palindrome. 0 if not.
 * @str: string.
 * @re: reversed.
 * ispalrecurs - checks for palindrome.
 */
int ispalrecurs(char *s, int str, int re)
{
	if (str == re)
		return (1);
	if (s[str] != s[re])
		return (0);
	if (str < re + 1)
		return (ispalrecurs(s, str + 1, re - 1));
	return (1);
}

int is_palindrome(char *s)
{

	if (*s)
	{
		return (1 + is_palindrome(s + 1));
	}

	int length = is_palindrome(s);

	if (length == 0)
	{
		return (1);
	}

	return (ispalrecurs(s, 0, length - 1));

}
