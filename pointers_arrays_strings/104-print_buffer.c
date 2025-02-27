#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer
 * @b: Buffer
 * @size: Buffer size
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size)
			{
				unsigned char first_part = b[i + j];
				unsigned char second_part = b[i + j + 1];

				if (i + j + 1 < size)
					printf("%02x%02x ", first_part, second_part);
				else
					printf("%02x   ", first_part);
			}
			else
				printf("     ");
		}

		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (isprint(b[i + j]))
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}
