#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file
 * @filename: First parameter
 * @text_content: Second parameter
 *
 * Return: 1 if success of -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (access(filename, W_OK) == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
