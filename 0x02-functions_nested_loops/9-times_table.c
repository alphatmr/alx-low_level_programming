#include "main.h"

/**
 * times_table - is a function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int num, multi, val;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			val = num * multi;

			if (val <= 9)
				_putchar(' ');

			else
				_putchar((val / 10) + '0');

			_putchar((val % 10) + '0');

		}
		_putchar('\n);

	}
}
