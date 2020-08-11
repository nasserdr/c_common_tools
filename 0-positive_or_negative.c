#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *Description: generates a random number 
 * and prints positive or negative or zero
 * on the screen accordingly.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%s", "is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");

	return (0);
}
