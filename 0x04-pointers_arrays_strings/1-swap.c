#include "holberton.h"

/**
 * swap_int - Swap 2 integers
 *
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int *tmp;
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
