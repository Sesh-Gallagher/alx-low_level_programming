#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * check_num - check - string if there are digits
 * @str: string array
 *
 * Return: Always 0 on Success
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - a program that adds posetive numbers
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 on Success
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}

