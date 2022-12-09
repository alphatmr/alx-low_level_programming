#include <stdio.h>

/**
 * main - print upper case and lower case alphabets
 *
 * Rerturn: 0 indicates success of the execusion.
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
