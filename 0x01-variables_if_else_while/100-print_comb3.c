#include <stdio.h>
/**
 * main -  A program that prints all possible different
 * combinations of two digits.
 * Return: 0
 */
int main(void)
{
int x;
int y;
for (x = 0; x <= 8; x++)
{
for (y = y + 1; y <= 9; y++)
{
putchar(x + '0');
putchar(y + '0');
if (x != 8 || y != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
