#include "main.h"

/**
 * _strlen - is a function that returns the length of a string.
 * @s: char value.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int len = 1;
	int total = 0;
	char arr = s[0];

	while (arr != '\0')
	{
		total++;
		arr = s[len++];
	}

	return (total);

}
