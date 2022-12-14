#include "main.h"

/**
 *
 * print_sign - is a a function that prints the sign of a number.
 *
 * Return: 1 if n is 0,
 * 0 if n is 0,
 * -1 if n < 0.
 *
 * @n: number input which sign i'll be printed.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}

}
