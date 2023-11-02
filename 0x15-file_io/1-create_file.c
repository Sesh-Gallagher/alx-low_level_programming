#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: pointer variable to the name of the file to be created
 * @text_content: a pointer to the string to be written to the file
 *
 * Return: 1 on success, -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int new_file, rt;

	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	new_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rt = write(new_file, text_content, len);

	if (new_file == -1 || rt == -1)
		return (-1);

	close(new_file);

	return (1);
}
