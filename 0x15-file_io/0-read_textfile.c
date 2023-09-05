#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the text charachters to be read and printed
 * @letters: Number of letters to be read and printed
 * Return: the actual number of letters it could read and print
 * - if the file can not be opened or read, return 0
 * - if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t fd;
	 ssize_t write_byte;
	 ssize_t read_byte;
	 char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	read_byte = read(fd, buf, letters);
	write_byte = write(STDOUT_FILENO, buf, read_byte);

	free(buf);
	close(fd);
	return (write_byte);
}
