#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - Encode a string into rot13
 *
 * @s: the string
 *
 * Return: the string encoded in rot13
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = t[j];
			}
		}
		i++;
	}

	return (s);
}
