#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument input
 * @av: argument vector
 *
 * Return: 0
 *
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, b = 0, d = 0, e = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][d])
		{
			ch++;
			d++;
		}

		d = 0;
		b++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	b = 0;
	while (av[b])
	{
		while (av[b][d])
		{
			s[e] = av[b][d];
			e++;
			d++;
		}

		s[e] = '\n';

		d = 0;
		e++;
		b++;
	}
	e++;
	s[e] = '\0';
	return (s);
}

