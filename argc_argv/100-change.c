#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: RTFM
 * @argv: RTFM
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int total, coins;

	if (argc < 0)
	{
		printf("0\n");
	}

	if (argc != 1)
	{
		printf("Error\n");
		return 1;
	}

	total = atoi(argv[1]);
	coins = 0;

	while (total % 25 == 0)
	{
		total -= 25;
		coins += 1;
	}

	while (total % 10 == 0)
	{
		total -= 10;
		coins += 1;
	}

	while (total % 5 == 0)
	{
		total -= 5;
		coins += 1;
	}

	while (total % 2 == 0)
	{
		total -= 2;
		coins += 1;
	}

	while (total % 1 == 0)
	{
		total -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
}
