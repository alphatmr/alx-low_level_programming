#include "main.h"

/**
 * main - function that prints 10 times the alphabet
 *
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
	int n, str;

	for (n = 0; n < 10; n++)

		for (str = 'a'; str <= 'z'; str++)
			_putchar(str);


		_putchar('\n');

}
