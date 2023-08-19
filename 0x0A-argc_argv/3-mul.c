#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _atoi - Prints multiplication of two args numbers
  * @s: String to be converted
  *
  * Return: int thats been converted from string
  */

int _atoi(char *s)
{
	int a, b, n, len, f, digit;

	a = 0;
	b = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}

