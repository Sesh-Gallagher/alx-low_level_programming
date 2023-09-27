#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @text_content: pointer to string to add at the end of the file
 * @filename: pointer to name of the file
 *
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, len);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
