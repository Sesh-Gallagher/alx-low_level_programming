#include <stdio.h>
/**
 * main - a  program that prints alphabets in lower case
 * Return: 0
 */
int main(void)
{
	for (char c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
