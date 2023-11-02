#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: The source text file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_byts, writn_byts;
	char *buffr;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffr =  malloc(sizeof(char) * letters + 1);
	if (buffr == NULL)
		return (0);

	read_byts = read(fd, buffr, letters);
	if (read_byts == -1)
		return (0);

	buffr[letters + 1] = '\0';
	close(fd);

	writn_byts = write(STDOUT_FILENO, buffr, read_byts);
	if (writn_byts == -1)
		return (0);

	free(buffr);

	return (writn_byts);
}
