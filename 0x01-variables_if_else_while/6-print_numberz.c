#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 using putchar
 *
 * Return: 0 indicates success.
 */

int main(void)
{
	int numz;

	for (numz = 0; numz < 10; numz++)
		putchar((numz % 10) + '0');

	putchar('\n');


	return (0);


}
