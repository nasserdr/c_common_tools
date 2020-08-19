#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: pointer to the destination characters
 * @src: pointer to the source characters
 * @n: Number of bytes to copy
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i != n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
