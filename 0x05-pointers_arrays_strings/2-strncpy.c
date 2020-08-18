#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - copies n characters from src at the end of dest
 *
 * @src: the source string
 * @dest: The destination string
 * @n: The number of characters to be concatenated
 *
 * Return: the destination string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
