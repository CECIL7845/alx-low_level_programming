#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int product, x1, x2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x1 = _atoi(argv[1]);
	x2 = _atoi(argv[2]);
	product = x1 * x2;

	printf("%d\n", product);

	return (0);
}
