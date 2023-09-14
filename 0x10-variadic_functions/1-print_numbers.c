#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string that is to be printed between numbers.
 * @n: number of integers passed
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int d;

	va_start(nums, n);

	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(nums, int));

		if (d != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
