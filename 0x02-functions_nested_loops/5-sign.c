#include "main.h"

/**
 *
 * print_sign - is a a function that prints the sign of a number.
 *
 * Return: if n > 0 print '+' return '1' if n==0 prints '0' return '0'
 *
 * if n < 0 print '-' return '-1'
 *
 * @n: number input
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
