#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, sum, val;

	for (i = 1; i < argc; i++)
	{
		val = atoi(argv[i]);
		if (val == 0)
		{
			printf("Error\n");
			return (-1);
		}
		sum += val;
	}
	printf("%d\n", sum);
	return (0);
}
