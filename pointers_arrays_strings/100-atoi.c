#include "main.h"
#include <stdio.h>

int _atoi(char *str)
{
	int sign = 1, result = 0;
	int i = 0;
	
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			return 0;
		i++;
	}

	return result * sign;
}
