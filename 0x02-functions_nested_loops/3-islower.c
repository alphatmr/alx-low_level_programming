#include "main.h"

/**
 *
 * _islower - is function that checks for lowercase character
 *
 * Return: 1 if the letter is lowercase or return 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);

}
