#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0 on success, 1 if not exactly one argument is passed or if the
 * argument is negative
 */
int main(int argc, char **argv)
{
	int total, count, i, size;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	if (*p || total < 0)
	{
		printf("Error\n");
		return (1);
	}

	count = 0;
	size = sizeof(cents) / sizeof(cents[0]);
	for (i = 0; i < size && total > 0; i++)
	{
		if (total >= cents[i])
		{
			count += total / cents[i];
			total = total % cents[i];
		}
	}

	printf("%d\n", count);
	return (0);
}
