#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase letters
 * of a string to uppercase
 *
 * @u: string argument.
 *
 * Return: uppercase string.
 */
char *string_toupper(char *u)
{
	int i = 0;

	while (*(u + i) != '\0')
	{
		if (*(u + i) >= 'a' && *(u + i) <= 'z')
		{
			*(u + i) = *(u + i) - 32;
		}

		u++;
	}

	return (u);

}

