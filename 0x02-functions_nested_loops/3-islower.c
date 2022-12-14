#include "main.h"

/**
 *
 * main - islower - is function that checks for lowercase character 3-islower.c
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
