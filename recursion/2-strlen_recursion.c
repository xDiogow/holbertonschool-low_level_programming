#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Counts the strlen recursively
 * @s: String
 */
int _strlen_recursion(char *s)
{
	return 1 + _strlen_recursion(s + 1);
}
