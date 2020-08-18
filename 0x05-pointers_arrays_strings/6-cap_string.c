#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Change all letters to capital letters
 *
 * @s: the string
 *
 * Return: the string in uppercase
 */

char *cap_string(char *s)
{
	int i;
	char c, b;

	i = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	while (*(s + i) != '\0')
	{
		c = *(s + i);

		if (c >= 'a' && c <= 'z')
		{
			b = *(s + i - 1);
			if (b == ' ' || b == '\n' || b == '\t' || b == ','\
			    || b == ';' || b == '.' || b == '?' || b == '\"'\
			    || b == '{' || b == '}' || b == '(' || b == '(')
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}

	return (s);
}
