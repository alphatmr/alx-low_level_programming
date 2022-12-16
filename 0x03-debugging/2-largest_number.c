#include "main.h"

/**
 *
 * main - program prints the largest of three integers.
 *
 * Return: largest number
 *
 * @c: first value
 * @b: second value
 * @c: third value
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;

	else if (b >= c && b >= a)
		largest = b;

	else
		largest = c;

	return (largest);


}
