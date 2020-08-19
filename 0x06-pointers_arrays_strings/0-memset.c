#include "holberton.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory where filling starts
 * @b: Constant to fill
 * @n: Number of bytes to fill
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		*(s + i) = b;
		n--;
	}
	return (s);
}
