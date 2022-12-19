#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: string vlaue
 * Return: string in reverse order.
 */
void print_rev(char *s)
{
	int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (j = (count - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');

}
