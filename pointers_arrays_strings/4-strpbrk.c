#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: input string
 * @accept: sete of chars to match
 * Return: pointer to the byte in c that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, position = 0;
	char *p = "";

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p[position] = s[i];
				position++;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (p);
}
