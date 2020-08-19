#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - copies n characters from src at the end of dest
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: number of similar characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
