#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy -  Copies the string src into the string dest
 *
 * @src: the source string
 * @dest: The destination string
 *
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		dest[i] = *(src + i);
		i++;
	}
	i++;
	dest[i] = '\0';

	return (dest);
}
