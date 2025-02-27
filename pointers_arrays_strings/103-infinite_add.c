#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 * @n1: Number 1
 * @n2: Number 2
 * @r: Buffer used to store the result
 * @size_r: Buffer size
 * Return: Buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, sum, carry;
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;
	carry = 0;

	memset(r, 0, size_r);

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (k < 0)
			return (0);

		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j--;
		k--;
	}
	memmove(r, r + k + 1, size_r - k - 1);
	r[size_r - k - 1] = '\0';
	return (r);
}
