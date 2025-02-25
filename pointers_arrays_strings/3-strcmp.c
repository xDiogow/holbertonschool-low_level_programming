#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: man strcmp :)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] == s2[i])
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
