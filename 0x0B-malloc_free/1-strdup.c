#include "main.h"
#include <stdlib.h>

/**
* _strdup - a function that returns a pointer to a newly allocated space
* which contains a copy of the string given as a parameter.
*@str: char to be duplicated
*
*Return: null if string
*/

char *_strdup(char *str)
{
	int x = 0, a = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[a])
	{
		a++;
	}

	s = malloc((sizeof(char) * a) + 1);

	if (s == NULL)
		return (NULL);

	while (x < a)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}

