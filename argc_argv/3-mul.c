#include <stdio.h>

/**
 * main - Prints amount of args
 * @argc: Amount of arguments
 * @argv: Array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int i;

	sum = argv[0];

	for (i = 1; i < argc; i++)
	{
		sum *= argv[i];
	}
	printf("%d", sum);
	return (0);
}
