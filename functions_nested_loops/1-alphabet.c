#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: None
 */
void print_alphabet()
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
