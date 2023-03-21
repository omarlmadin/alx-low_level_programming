#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @n: parameter
 * Return: returns output
 */

int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}
