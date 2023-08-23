#include "main.h"
/**
 * reverse_array -a funcion that reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int b;

	for (m = 0; m < n--; m++)
	{
		b = a[m];
		a[m] = a[n];
		a[n] = b;
	}
}
