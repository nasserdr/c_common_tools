#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
This program will assign a random number to the variable n each time it is
* executed. Complete the source code in order to print the last digit of the
* number stored in the variable n.
*
*You can find the source code here
*The variable n will store a different value every time you run this program
*You dont have to understand what rand, srand, and RAND_MAX do. Please do 
*not touch this code
*The output of the program should be:
*The string Last digit of, followed by
*n, followed by
*the string is, followed by
*if the last digit of n is greater than 5: the string and is greater than 5
*if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 
*and not 0 followed by a new line
*/

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (n == 0)
		printf("Last digit of %d is %d and is zero\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not zero\
\n", n, last);

	return (0);
}