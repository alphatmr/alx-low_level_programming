#include <stdio.h>

/**
 * main - print the alphabet in lower case
 *
 * Return: 0 indicates the success of the execution
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);


	putchar('\n');


	return (0);

}
