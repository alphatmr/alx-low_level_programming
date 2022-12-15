#include "main.h"

/**
 *
 * print_most_numbers - Write a function that prints most of the numbers
 *
 * Return: from 0 to 9 followed by a new line.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2)
		{
			if (i != 4)
			{
				_putchar(i);
			}
		}
	}

	_putchar('\n');

}
