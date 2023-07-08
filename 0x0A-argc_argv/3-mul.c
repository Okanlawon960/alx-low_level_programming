#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;
	int ans = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (count = 1; count < argc; count++)
	{
		ans *= atoi(argv[count]);
	}

	printf("%d\n", ans);
	return (0);
}
