#include "main.h"
#include <stdio.h>
#include <limits.h>

int _atoi(char *str)
{
	int sign = 1, result = 0, digit_found = 0;
	int i = 0;
	
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] == '-' && !digit_found)
			sign = -sign;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			digit_found = 1;
			result = result * 10 + (str[i] - '0');
		}
		else if (digit_found)
			break;
		i++;
	}
	if (result == 2147483648 && sign == -1)
		return INT_MIN;
	return result * sign;
}
