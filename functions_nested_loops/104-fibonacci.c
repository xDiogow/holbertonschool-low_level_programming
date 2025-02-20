#include <stdio.h>

#define SPLIT_LIMIT = 1000000000

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long a_high = 0, a_low = 1;
	long b_high = 0, b_low = 2;
	long temp_high, temp_low;

	printf("%ld, %ld", a_low, b_low);

	for (i = 3; i < 99; i++)
	{
		temp_low = a_low + b_low;
		temp_high = a_high + b_high;

		if (temp_low >= SPLIT_LIMIT)
		{
			temp_high = temp_low / SPLIT_LIMIT;
			temp_low = temp_low % SPLIT_LIMIT;
		}

		printf(", ");

		if (temp_high > 0)
			printf("%ld%ld", temp_high, temp_low);
		else
			printf("%ld", temp_low);

		a_low = b_low;
		a_high = b_high;
		b_low = temp_low;
		b_high = temp_high;
	}
	
	printf("\n");
	return (0);
}
