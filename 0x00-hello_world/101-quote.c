#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int status = system("echo -n 'and that piece of art is useful\" - Dora\
Korpar, 2015-10-19\n' 1>&2");
	return (status);
}
