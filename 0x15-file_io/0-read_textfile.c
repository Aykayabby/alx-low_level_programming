#include "main.h"

/**
 * read_textfile - reads q text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. It fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, char_read, char_to_write;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	char_read = read(fd, buf, letters);
	if (char_read == -1)
		return (0);
	char_to_write = write(STDOUT_FILENO, buf, char_read);
	if (char_to_write == -1)
		return (0);
	close(fd);
	free(buf);
	return (char_to_write);
}
