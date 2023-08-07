#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: Second String
 *
 * Return: Pointer to string, NULL if fails
 *
 */


char *str_concat(char *s1, char *s2)
{
	int lengthA, lengthB, lengthC, j;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lengthA = 0;
	while (*(s1 + lengthA) != '\0')
	{
		lengthA++;
	}

	lengthB = 0;
	while (*(s2 + lengthB) != '\0')
	{
		lengthB++;
	}

	lengthC = lengthA + lengthB;

	arr = (char *) malloc(lengthC * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (j = 0; j < lengthA; j++)
		arr[j] = s1[j];
	for (j = 0; j < lengthB; j++)
		arr[j + lengthA] = s2[j];

	return (arr);
}
