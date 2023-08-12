#include <stdio.h>
/**
 * main - A program prints all possible different
 * combinations of three digits
 * Return: 0
 */
int main(void)
{
	int x, y, l;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(l);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
