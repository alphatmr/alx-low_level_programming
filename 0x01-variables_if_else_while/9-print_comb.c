#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: 0 indicates success
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{

		putchar((numbers % 10) + '0');
		if (numbers == 9)
			continue;

		putchar(',');

		putchar(' ');
	}

	putchar('\n');


	return (0);


}
