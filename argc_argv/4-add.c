#include <stdio.h>

int main(int argc, char *argc[])
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argc[i]);
	}
	printf("%d\n", sum);
	return (0);
}
