#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it will generate random numbers and specify weather the number is postive, negative or zero.
 *
 *Return: 0 indicates the excusion was successful
*/

int main(void)
{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;



	if (n > 0)

		printf("%d is positive\n", n);

	else if (n < 0)

		printf("%d is negative\n", n);

	else

		printf("%d is zero\n", n);



	return (0);
}

