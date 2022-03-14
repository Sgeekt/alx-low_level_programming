#include <stdlib.h>
#include <time.h>
/**
 * this is my first project
 * please control where necessary
 * Lets go C language
 */
/**
 * the first function
 * that executes the program
 * starts from here
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d: is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d: is negative\n", n);
	}
	else
	{
		printf("%d: is zero\n");
	}
	return (0);
}
