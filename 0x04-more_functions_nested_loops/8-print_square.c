#include "main.h"

/**
 *
 * print_square - is a function that prints a square
 * Return: no return value.
 * @size: size of a square
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');

		}
		if (i != size - 1)
			_putchar('\n');
	}
	putchar('\n');

}
