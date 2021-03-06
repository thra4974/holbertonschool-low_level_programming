#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers
 * @separator: string to be printed between numbers.
 * @n: total number of integers passed.
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i < n - 1)

				printf("%d%s", va_arg(numbers, unsigned int), separator);
			else
				printf("%d\n", va_arg(numbers, unsigned int));
		}
	}

	va_end(numbers);
}
