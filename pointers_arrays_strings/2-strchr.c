#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: Source
 * @c: Character
 * Return: Pointer to first occurence of char c in the string s
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr;
	
	while (s[i] != c)
	{
		*ptr = s[i];
	}
	return (ptr);
}

