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
	int a;

	for (a = 0x0; a <= 0x9; a++)
		putchar(a +'0');

	putchar('\0');

	for (a = 0x10; a <= 0x15 ;a++)
		putchar(a+'0');

	putchar('\n');
	return (0);
}
