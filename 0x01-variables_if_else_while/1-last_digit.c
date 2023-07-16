#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - To print last generated random number
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;

	printf("Last digit of %d is %d and is ", n, j);
	if (j > 5)
		printf("greater than 5\n");
	else if (j == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");


	return (0);
}
