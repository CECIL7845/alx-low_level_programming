#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int m, n, x;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			x = n * m;
			if (n == 0)
			{
				_putchar(x + '0');
			}

			if (x < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			} else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
