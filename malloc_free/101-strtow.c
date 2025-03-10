#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
	int word_count = 0;
	int i, j, k, m;
	char **words;

	if (str == NULL || strcmp(str, ""))
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = malloc(sizeof(char *) * word_count + 1);
	if (words == NULL)
		return (NULL);

	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;

		for (j = i; str[i] != '\0' && str[j] != ' '; j++);

		words[k] = malloc(sizeof(char) * j - i + 1);
		if (words[k] == NULL)
		{
			while (k > 0)
			{
				k--;
				free(words[k]);
			}
			free(words);
			return (NULL);
		}

		for (m = 0; m < (j - i); m++)
		{
			words[k][m] = str[i + m];
		}

		words[k][m] = '\0';
		k++;
		i = j + 1;
	}
	words[k] = NULL;

	return (words);
}
