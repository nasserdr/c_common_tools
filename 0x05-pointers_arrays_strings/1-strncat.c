#include "holberton.h"
#include <stdio.h>

/**
 * _strncat -  Concatenates n characters from src at the end of dest
 *
 * @src: the source string
 * @dest: The destination string
 * @n: The number of characters to be concatenated
 *
 * Return: the destination string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len, n_copied;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	len = i;
	i = 0;
	n_copied = 0;

	while (*(src + i) != '\0' && n_copied < n)
	{
		dest[len + i] = src[i];
		i++;
		n_copied++;
	}
	dest[len + i] = '\0';
	return (dest);
}
