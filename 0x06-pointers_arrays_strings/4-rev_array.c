#include "main.h"

/**
 * reverse_array - is a function that reverses the content of an
 * array of integs
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: reverses content of an array.
 */
void reverse_array(int *a, int n)
{
	int reverse, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		reverse = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = reverse;
		start++;
		end--;
	}

}
