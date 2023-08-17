#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the numbers
 * from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: 0
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 != 0)
		{
			printf(" Fizz");
		} else if (count % 5 == 0 && count % 3 != 0)
		{
			printf(" Buzz");
		} else if (count % 3 == 0 && count % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (count == 1)
		{
			printf("%d", count);
		} else
		{
			printf(" %d", count);
		}
	}
	printf("\n");

	return (0);
}
