#include "holberton.h"
#include <stdio.h>

/**
 * _strcat -  Concatenates the src string after the dest string
 *
 * @src: the source string
 * @dest: The destination string
 *
 * Return: the destination string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	n = i;
	i = 0;
	while (*(src + i) != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
