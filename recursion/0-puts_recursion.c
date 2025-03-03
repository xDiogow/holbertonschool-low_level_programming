#include <stdio.h>

/**
 * _puts_recursion - Prints a string recursively
 * @s: String to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		puts('\n');
		return;

	puts(*s);
	_puts_recursion(s + 1);
}
