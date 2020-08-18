#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses the elements in an array
 *
 * @a: the array of integer
 * @n: the size of the array
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = temp;
	}
}
