#include <stdio.h>

int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
	int i;
	for (i = 0; i <= 50; i++)
	{
		int result = fibonacci(i);
		printf("%d, ", result);
	}
	return (0);
}
