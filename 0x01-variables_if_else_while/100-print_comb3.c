#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
		for (b = a; b <= 9; b++)
	{
		if ( a!= b)
		{
			putchar(a + '0');
			putchar(b + '0');
			if(!(a == 8 && b == 9))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
