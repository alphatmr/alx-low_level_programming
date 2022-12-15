#include "main.h"

/**
 *
 * print_line - is a function that draws a straight line in the terminal.
 *
 * @n: is a parameter for the function
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int sl;

	if (n > 0)
	{
		while (sl <= n)
		{
			_putchar('_');
			sl++;
		}

	_putchar('\n');

	}

	else
	_putchar('\n');

}
