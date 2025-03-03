#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum += a[size][size];

	for (i = size - 1; i > 0; i--)
		sum2 += a[size][size];

	printf("%d, %d", sum, sum2);
}
