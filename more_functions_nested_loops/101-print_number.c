#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a integer
 * @n: the integer
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10)
	_putchar((n % 10) + '0');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
