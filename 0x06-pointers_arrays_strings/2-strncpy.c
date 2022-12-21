#include "main.h"

/**
 * _strncpy - is a function that copies a string.
 * @dest: 1st string value
 * @src: 2nd string value
 * @n: size of 2nd string values.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);

}
