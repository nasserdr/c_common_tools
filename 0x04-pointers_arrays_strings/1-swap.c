#include "holberton.h"
#include <stdio.h>
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
	int tmp1, tmp2;

	tmp1 = *a;
	tmp2 = *b;
	*b = tmp1;
	*a = tmp2;
}
