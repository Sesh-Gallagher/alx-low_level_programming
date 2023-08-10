#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - write a program that prints all arguments it receives.
  * @argc: argument count / number of arguments
  * @argv: argument vector / array of arguments
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

