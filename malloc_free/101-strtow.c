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
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, j, k, word_len, word_count;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    while (*str)
    {
        if (*str != ' ')
        {
            word_len = 0;
            while (str[word_len] && str[word_len] != ' ')
                word_len++;

            words[i] = malloc(sizeof(char) * (word_len + 1));
            if (words[i] == NULL)
            {
                for (j = 0; j < i; j++)
                    free(words[j]);
                free(words);
                return (NULL);
            }

            for (k = 0; k < word_len; k++)
                words[i][k] = str[k];
            words[i][k] = '\0';

            i++;
            str += word_len;
        }
        else
        {
            str++;
        }
    }

    words[i] = NULL;

    return (words);
}

