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
	int a, b, c;

	for (a = 0; a <= 8; a++)
		for (b = a; b <= 9; b++)
			for (c = b; c <= 9; c++)
			{
				if (a != b && b != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
