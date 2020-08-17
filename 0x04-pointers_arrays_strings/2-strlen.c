#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Swap 2 integers
 *
 * @s: pointer to a string
 *
 * Return: The lenght of the string s
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (*(s + n) != '\0')
		n++;

	return (n);
}
