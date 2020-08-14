#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"


/**
 * positive_or_negative - Test whether the given integer is positive or negative
 *
 * @n: input integer
 *
 * Return: Always 0 (Success)
 */


void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d %s", n, "is positive\n");
	else if (n < 0)
		printf("%d %s", n, "is negative\n");
	else
		printf("%d %s", n, "is zero\n");


}
