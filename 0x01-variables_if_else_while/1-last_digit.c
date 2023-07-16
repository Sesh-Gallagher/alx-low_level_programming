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
	if (j > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, j);
	if (j == 0)
		printf("last digit of %d is %d and is 0\n", n, j);
	if (j < 6 && j != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, j);
	return (0);
}
