#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String two
 * @n: Amount of bytes
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s_s1 = 0, i = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s_s1] != '\0')
		s_s1++;

	ptr = malloc(sizeof(char) * (s_s1 + n));

	for (i = 0; i < s_s1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < n; i++)
		ptr[s_s1 + i] = s2[i];

	return (ptr);
}
