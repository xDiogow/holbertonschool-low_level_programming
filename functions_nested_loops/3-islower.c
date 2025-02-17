#include "main.h"

/**
 * islower - Checks if a letter is lowercase.
 *
 * Return: 1 when letter is lowercase
 *         0 when letter is uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
