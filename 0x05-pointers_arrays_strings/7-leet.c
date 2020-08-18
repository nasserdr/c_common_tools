#include "holberton.h"
#include <stdio.h>

/**
 * leet - Encode a string into 1337
 *
 * @s: the string
 *
 * Return: the string encoded in 1337
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aoetl";
	char t[] = "43071";

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
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
