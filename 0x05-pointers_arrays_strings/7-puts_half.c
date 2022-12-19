#include "main.h"

/**
 * puts_half - is a function that prints the second half of the string
 * @str: input value.
 * Return: second half of the string
 */
void puts_half(char *str)
{
	int i, num, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	num = (len / 2);

	if ((len % 2) == 1)
		num = ((len + 1) / 2);

	for (i = num; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');


}
