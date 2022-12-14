#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit of a number.
 *
 * Return: the value of the last digit
 *
 * @n: value of the last digit.
 */

int print_last_digit(int n)
{
	int l_num = n % 10;

	if (l_num < 0)
		l_num *= -1;

	_putchar(l_num + '0');

	return (l_num);

}
