#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: pointer to the source characters
 * @accept: characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	const char *scanp;
	int c, sc;

	while ((c = *s++) != 0)
	{
		for (scanp = accept; (sc = *scanp++) != 0;)
			if (sc == c)
				return ((char *)(s - 1));
	}
	return (NULL);

}
