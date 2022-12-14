#include "main.h"

/**
 *main - a function that prints the alphabet
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		_putchar(str);

	_putchar('\n');

}
