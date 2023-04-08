#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_buffer_and_copy - copies a file to another
 * @buffer: First parameter
 * @len: Second parameter
 * @fd1: third
 * @fd2: fourth
 *
 * Return: integer
 */

int create_buffer_and_copy(char **buffer, int len, int fd1, int fd2)
{
	int rd, wr;

	*buffer = malloc(sizeof(char) * len);
	if (*buffer == NULL)
	{
		close(fd1);
		close(fd2);
		return (-3);
	}

	while ((rd = read(fd1, *buffer, 1024)) > 0)
	{
		wr = write(fd2, *buffer, rd);
		if (wr != rd)
		{
			free(*buffer);
			close(fd1);
			close(fd2);
			return (-3);
		}
	}
	if (rd == -1)
	{
		free(*buffer);
		close(fd1);
		close(fd2);
		return (-2);
	}

	return (1);
}

/**
 * copy_file - copies a file to another
 * @from: First parameter
 * @to: Second parameter
 *
 * Return: integer
 */

int copy_file(char *from, char *to)
{
	int fd1, fd2, cls1, cls2, len, ret;
	char *buffer = NULL;

	fd1 = open(from, O_RDONLY);
	if (fd1 == -1)
		return (-2);
	fd2 = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		close(fd1);
		return (-3);
	}
	len = lseek(fd1, 0, SEEK_END);
	lseek(fd1, 0, SEEK_SET);

	ret = create_buffer_and_copy(&buffer, len, fd1, fd2);

	if (ret < 0)
		return (ret);

	free(buffer);

	cls1 = close(fd1);
	if (cls1 == -1)
		return (3);

	cls2 = close(fd2);
	if (cls2 == -1)
		return (4);
	return (0);
}

/**
 * main - main function
 * @argc: First parameter
 * @argv: Second parameter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	res = copy_file(argv[1], argv[2]);
	if (res == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (res == -3)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (res == 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", res);
		exit(100);
	}
	else if (res == 4)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", res);
		exit(100);
	}

	return (0);
}
