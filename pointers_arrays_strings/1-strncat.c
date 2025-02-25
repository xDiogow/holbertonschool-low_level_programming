#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - Appends the `src` string to the `dest` string
 * @dest: Destination string
 * @src: Source string
 * Return: Destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dI = 0, sI = 0, s_len;

	while (dest[dI] != '\0')
		dI++;

	s_len = strlen(src);
	
	if (n >= s_len)
		n = s_len;
	
	while (src[sI] != '\0' && n <= dI)
	{
		dest[dI + sI] = src[sI];
		sI++;
	}

	return (dest);
}
