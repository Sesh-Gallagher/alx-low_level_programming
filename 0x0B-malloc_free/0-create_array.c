#include "main.h"
#include <stdlib.h>

/**
* create_array - creates and array of chars
* @size: of the array to be filled
* @c: char to be filled in array
*
* Return: pointer to the array, NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}

	return (str);
}
