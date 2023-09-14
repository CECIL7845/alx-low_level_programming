#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, count;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (count = 0; count < bytes; count++)
	{
		if (count == bytes - 1)
		{
			printf("%02hhx\n", arr[count]);
			break;
		}
		printf("%02hhx ", arr[count]);
	}
	return (0);
}
