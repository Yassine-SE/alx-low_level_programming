#include "stdio.h"
#include "stdlib.h"
#include "time.h"

/**
 * main - Print last digit of n
 *
 * Description: By using if statement
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	last = n % 10;
	if (last > 5)
		printf("%d and is greater than 5\n", last);
	else if (last == 0)
		printf("%d and is 0\n", last);
	else if (last < 6 && last != 0)
		printf("%d and is less than 6 and not 0\n", last);
	return (0);
}
