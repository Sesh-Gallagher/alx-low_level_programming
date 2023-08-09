#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Write a program that prints its name
*
*@argc: argument count
*@argv: argument vector
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
