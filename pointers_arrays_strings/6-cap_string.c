#include "main.h"
#include <stdio.h>

int is_separator(char c)
{
	int i;
	char *separators = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

char *cap_string(char *str)
{
	int i = 0;
	int should_cap = 1;

	while (str[i] != '\0')
	{
		if (should_cap && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		should_cap = is_separator(str[i]);
		i++:	
	}
}
