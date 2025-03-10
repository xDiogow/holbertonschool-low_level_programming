#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

/**
 * get_next_word - Finds the next word in a string
 * @str: The input string
 * @len: Pointer to store the length of the word
 *
 * Return: Pointer to the start of the next word
 */
char *get_next_word(char *str, int *len)
{
	char *word_start;
	int word_len = 0;

	while (*str && *str == ' ')
		str++;

	word_start = str;

	while (*str && *str != ' ')
	{
		word_len++;
		str++;
	}

	*len = word_len;
	return (word_start);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	char *word_start;
	int i, j, word_len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		word_start = get_next_word(str, &word_len);
		words[i] = malloc(sizeof(char) * (word_len + 1));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_len; j++)
			words[i][j] = str[j];
		words[i][word_len] = '\0';
		str = word_start word_len;
	}

	words[word_count] = NULL;
	return (words);
}
