#include "main.h"

/**
 *
 * print_line - is a function that draws a straight line in the terminal.
 *
 * @n: is a parameter for the function
 *
 * Return: straight line
 */
void print_line(int n)
{
	int sl;

	if (n <= 0)
	{
		_putchar('\n')

	}

	else
	{
		for(sl = 1; sl <= n; sl++)
		{
			_putchar('_');
		}

		_putchar('\n');

	}

}
