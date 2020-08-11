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

	for (a = 0; a <= 9; a++)
		for (b = 0; b <= 9; b++)
	{
		if ( !(a == 9 && b == 9))
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(a + '0');
			putchar(b + '0');
		}
	}
	putchar('\n');
	return (0);
}
