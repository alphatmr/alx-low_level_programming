#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0 indicates success.
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);


	putchar('\n');


	return (0);


}
