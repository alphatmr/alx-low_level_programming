#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 indicates success.
 */

int main(void)
{
	int numbers;
	char letters;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');


	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);


	putchar('\n');


	return (0);

}
