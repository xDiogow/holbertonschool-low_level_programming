#include <stdio.h>

/**
 * print_int - Prints a number in the console using the putchar function.
 * @n: Number to print
 *
 * Return: None
 */
void print_int(int n)
{
	if (n / 10)
		print_int(n / 10);
	putchar(n % 10 + '0');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			print_int(i);
			putchar(' ');
			print_int(j);
			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
