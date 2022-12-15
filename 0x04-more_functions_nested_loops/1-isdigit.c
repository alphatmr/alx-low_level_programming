#include "main.h"

/**
 *
 * _isdigit - is a function that checks for a digit.
 *
 * Return: 1 if c is a digit 0 otherwise
 *
 * @c: is an argument to store input.
 *
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);

}
