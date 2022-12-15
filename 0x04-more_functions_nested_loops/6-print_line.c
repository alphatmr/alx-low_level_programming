#include "main.h"
#include <stdio.h>

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

	for (sl = 0; sl < n; sl++)
	{
		_putchar('_');
	}

	_putchar('\n');


}
