#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
