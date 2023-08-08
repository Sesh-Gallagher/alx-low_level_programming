#include "main.h"
#include <stdlib.h>

/**
 * count_word - function to count words in a string
 * @s: string to be evaluated
 *
 * Return: word count
 */

int count_word(char *s)
{
	int flag, a, x;

	flag = 0;
	x = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - splits a string
 * @str: string to be split
 *
 * Return: pointer to an array of strings, NULL if error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int t, s = 0, len = 0, words, d = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (t = 0; t <= len; t++)
	{
		if (str[t] == ' ' || str[t] == '\0')
		{
			if (d)
			{
				end = t;
				tmp = (char *) malloc(sizeof(char) * (d + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[s] = tmp - d;
				s++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = t;
	}

	matrix[s] = NULL;

	return (matrix);
}
