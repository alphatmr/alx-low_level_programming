#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str: input value.
 * Return: print character of a string.
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putcahr(str[i]);
		else
			continue;

	}

	_putchar('\n');

}
