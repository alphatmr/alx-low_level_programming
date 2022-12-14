#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: print alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int n, str;

	n = 0;

	while (n < 10)
	{

		for (str = 'a'; str <= 'z'; str++)
		{
			_putchar(str);
		}

		n++;

		_putchar('\n');
	}

}
