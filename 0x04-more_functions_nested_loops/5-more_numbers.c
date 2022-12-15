#include "main.h"
#include <stdio.h>

/**
 *
 * more_numbers - a function that prints 10 times the numbers.
 *
 * Return:  from 0 to 14, followed by a new line.
 *
 */
void more_numbers(void);
{
	int i;

	int j;

	int k;

	int result;



	i = 0;

	result = 0;

	while (i < 10)

	{

		while (result <= 14)

		{

			if (result < 10)

			{

				k = result;

			}



			else

			{

				j = result / 10;

				k = result % 10;

				_putchar (j + '0');

			}



			_putchar (k + '0');



			result++;

		}

		i++;

		result = 0;

		_putchar ('\n');

	}
}
