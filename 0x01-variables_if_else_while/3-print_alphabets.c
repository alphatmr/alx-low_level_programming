#include <stdio.h>

/**
 * main - print uppercase and lowercase alphabets
 *
 * Return: 0 indicates success.
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);

	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);

	putchar('\n');


	return (0);

}
