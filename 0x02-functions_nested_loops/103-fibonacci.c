#include <stdio.h>

/**
 * main - A program that finds and prints the sum of
 * the even-valued terms followed by a new line
 * Return:0
 */
int main(void)
{
	int count;
	unsigned long int a, b, next, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (count = 1; count <= 33; ++count)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}

	printf("%lu\n", sum);

	return (0);
}
