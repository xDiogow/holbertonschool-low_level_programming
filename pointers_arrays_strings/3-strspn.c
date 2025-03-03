#include "main.h"

/**
 * _strnspn - Gets the length of a prefix substring.
 * @s: input string
 * @accept: sete of chars to match
 * Return: length of a prefix substring
 */
unsigned int _strnspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				c++;
		}

		i++;
		j = 0;
	}
	return (c);
}
