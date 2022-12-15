#include "main.h"

/**
 *
 * more_numbers - a function that prints 10 times the numbers.
 *
 * Return:  from 0 to 14, followed by a new line.
 *
 */
void more_numbers(void);
{
	int i = 0;
	int j = 0;

	while (j <= 9)
	{	
		while (i <= 14)
		{
			if (i < 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;

		}

		_putchar('\n');
		j++;
		i = 0;

	}
}
