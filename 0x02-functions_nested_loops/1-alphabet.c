#include "main.h"
#include <unistd.h>

/**
 * main - program that prints alphanbets in lowercase
 *
 * Return: 0 on (success)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;

	}
	_putchar('\n');

}
