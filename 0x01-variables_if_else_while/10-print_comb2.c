#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	for (int i = 0; i < 100 ; i++)

	{
		putchar (i);

		if (i < 10)

		{
			putchar ((i / 10) + '0');

			putchar((i % 10) + '0');
		}

	}

	putchar(10);
	
	return (0);

}
