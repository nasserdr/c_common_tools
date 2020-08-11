#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *A program that prints the alphabet in lowercase, followed by a new line.
 */

int main(void)
{
	char a;
	for ( a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
