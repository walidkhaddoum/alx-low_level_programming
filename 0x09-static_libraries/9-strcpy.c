#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * Return: Absolute value of ab
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';

	return (dest);
}
