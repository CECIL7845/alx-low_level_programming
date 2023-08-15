#include <stdio.h>

/**
 * main - A program that prints first 50 Fibonacci numbers, starting
 * with 1 and 2, separated by a comma followed by a space.
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
