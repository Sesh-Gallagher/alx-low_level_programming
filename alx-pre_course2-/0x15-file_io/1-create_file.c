#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a file.
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to the string to write to the file
 *
 * Return: 1 on success, --1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_open, write_byte, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_byte = write(file_open, text_content, len);

	if (file_open == -1 || write_byte == -1)
		return (-1);

	close(file_open);

	return (1);
}
