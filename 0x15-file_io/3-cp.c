#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * copy_file - a program that copies the content of a file to another file
  * @src: source file to be copied
  * @dest: destination of the new file to be copied
  *
  * Return: void
 */

void copy_file(const char *src, const char *dest)
{
	int original_fd;
	int copy_fd;
	int reader;
	char buffer[1024];

	original_fd = open(src, O_RDONLY);
	if (!src || original_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	copy_fd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((reader = read(original_fd, buffer, 1024)) > 0)
	{
		if (write(copy_fd, buffer, reader) != reader || copy_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(original_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", original_fd);
		exit(100);
	}

	if (close(copy_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy_fd);
		exit(100);
	}
}

/**
  * main - The Entry point where file is to be edited
  * @argv: The number of arguments
  * @argc: The count of characters in a string
  * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}
