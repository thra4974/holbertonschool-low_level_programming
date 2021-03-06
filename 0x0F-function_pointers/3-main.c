#include "3-calc.h"
/**
 * main - prints result of operation.
 * @argc: number of arguments
 * @argv: pointer to vector array.
 * Return: Value from chosen operator and integer input.
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num;
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num = f(a, b);

	printf("%d\n", num);

	return (0);
}
