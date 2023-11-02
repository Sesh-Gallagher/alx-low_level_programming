#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Pointer variable to the name of the file
 * @text_content: string to be added to the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file Return 1
 * if the file exists and -1 if the file does not exist or if you do not
 * have the required permissions to write the file
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int appended_file, rt;

	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;

	}

	appended_file = open(filename, O_WRONLY | O_APPEND);
	rt = write(appended_file, text_content, len);

	if (appended_file == -1 || rt == -1)
		return (-1);

	close(appended_file);

	return (1);
}
