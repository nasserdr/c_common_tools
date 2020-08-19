#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string..
 *
 * @s: pointer to the source characters
 * @c: the sought character
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * , or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			p = s + i;
			return (p);
		}
		i++;
	}
	return (NULL);
}
