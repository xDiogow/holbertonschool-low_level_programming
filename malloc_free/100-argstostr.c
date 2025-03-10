#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	char *final = "";
	int len = 0, i, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		while (av[i][j] != '\0')
		{
			final[len] = av[i][j];
			len++;
			j++;		
		}
	return (final);
}
