#include "main.h"

/**
 * _strncat - is a function that concatenates two strings.
 *
 * @dest: 1st string value
 * @src: 2nd string value
 * @n: size of second string value.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int str1, str2;

	str1 = 0;
	str2 = 0;

	while (*(dest + str1) != '\0')
		str1++;

	while (*(src + str2) != '\0' && str1 < 97 && str2 < n)
	{
		*(dest + str1) = *(src + str2);
		str1++;
		str2++;
	}

	*(dest + str1) = '\0';
	return (dest);

}
