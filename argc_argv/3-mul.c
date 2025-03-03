#include <stdio.h>

/**
 * main - Prints amount of args
 * @argc: Amount of arguments
 * @argv: Array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	sum = atoi(argv[1]);

	for (i = 2; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%d", sum);
	return (0);
}
