#include "main.h"

/**
 * main - Determines if a number is positive, negative or zero.
 * Return: 0
 */
int main(void)
{
        int i;

        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }
        return (0);
}
