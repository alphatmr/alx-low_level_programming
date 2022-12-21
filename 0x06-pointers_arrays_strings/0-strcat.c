#include "main.h"

/**
 * _strcat - is a function that concatenates two strings.
 *
 * @dest: 1st string value
 * @src: 2nd string value
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int str1, str2;

	str1 = 0;
	str2 = 0;

	while (*(dest + str1) != '\0')
		str1++;

	while (*(src + str2) != '\0' && str1 < 97)
	{
		*(dest + str1) = *(src + str2);
		str1++;
		str2++;

	}

	*(dest + str1) = '\0';
	return (dest);

}
