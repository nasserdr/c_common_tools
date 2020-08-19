#include "holberton.h"
#include <stdio.h>

/**
 * compare - compares 2 strings
 *
 * @X: string 1
 * @Y: string 2
 *
 * Return: null if not equal or pointer if equal
 */

int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
			return (0);
		X++;
		Y++;
	}
	return (*Y == '\0');
}


/**
 * _strstr - function that locates a substring
 *
 * @haystack: pointer to the source characters
 * @needle: pointer to the substring
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
		haystack++;
	}

	return (NULL);

}
