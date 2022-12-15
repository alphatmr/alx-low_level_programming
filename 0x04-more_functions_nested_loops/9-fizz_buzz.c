#include <stdio.h>

/**
 *
 * main - a program that prints the numbers from 1 to 100,
 *  But for multiples of three print Fizz instead of number
 *
 *  Return: Alwas 0.
 */

int main(void)
{
	int fb = 1;

	while (fb <= 100)
	{
		if (fb % 3 == 0 && fb % 5 == 0)
			printf("FizzBuzz");

		else if (fb % 3 == 0)
			printf("Fizz");

		else if (fb % 5 == 0
			printf("Buzz");

		else
			printf("%d", fb);

		if (fb != 100)
			printf(" ");
		fb++;

	}

	printf('\n');
	return (0);

}
