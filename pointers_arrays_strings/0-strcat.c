#include <stdio.h>
#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
	int dI = 0, sI = 0;

	while (dest[dI] != '\0')
		dI++;

	while (src[sI] != '\0')
	{
		dest[dI + sI] = src[sI]
	}
	return dest;
}
