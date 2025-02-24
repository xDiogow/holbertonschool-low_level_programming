#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @str: String
 */
void print_rev(char *str)
{	
	int i, current_index = 0;
	int s_size = strlen(str);
	char* rev_s[s_size];

	for (i = s_size; i > 0; i--)
		rev_s[current_index] = str[i];
	printf("%s", rev_s);
}
