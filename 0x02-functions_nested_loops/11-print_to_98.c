#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all numbers from n to 98
 *
 * @c: input integer from which we wish to start the counting
 * Return: Nothing
 */

void print_to_98(int c)
{
	int i;

	for (i = c; i < 98; i++)
	{
		printf("%d, ", i);
	}
	printf("98 \n");
}
