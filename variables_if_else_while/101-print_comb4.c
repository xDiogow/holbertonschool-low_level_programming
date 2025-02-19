#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;
	bool first = true;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (!first)
				{
					putchar(',');
					putchar(' ');
				}
				first = false;
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
