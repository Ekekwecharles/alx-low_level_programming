#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * copy_file - copies a file to another
 * @from: First parameter
 * @to: Second parameter
 *
 * Return: integer
 */

int copy_file(char *from, char *to)
{
	int fd1, fd2, cls1, cls2, len, wr, rd, count = 0;
	char *buffer;

	len = strlen(from);
	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (-3);

	fd1 = open(from, O_RDONLY);
	fd2 = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((rd = read(fd1, buffer, 1024)) > 0)
		count += rd;
	if (rd == -1 || fd1 == -1)
	{
		free(buffer);
		return (-2);
	}
	buffer[count] = '\0';

	wr = write(fd2, buffer, count);
	if (wr == -1 || fd2 == -1)
	{
		free(buffer);
		return (-3);
	}

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
