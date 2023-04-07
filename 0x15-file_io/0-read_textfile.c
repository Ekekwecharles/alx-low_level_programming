#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *		to the POSIX standard output.
 * @filename: First parameter
 * @letters: Second parameter
 *
 * Return: number of letters printed or 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wr, rd, count = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

	while ((rd = read(fd, buffer + count, letters - count)) > 0)
	{
		count += rd;
	}

	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[count] = '\0';

	wr  = write(STDOUT_FILENO, buffer, count);
	if (wr == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (wr);
}
