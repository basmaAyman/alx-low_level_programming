#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer -  fn Allocates 1024 bytes for a buffer.
 * @file: The name of the file
 * Return: A pointer to newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *nbuffer;

	nbuffer = malloc(sizeof(char) * 1024);

	if (nbuffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (nbuffer);
}
/**
 * close_file - fn Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - fn Copies the contents of a file to another.
 * @argc: No arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int frm, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(frm, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(frm);
	close_file(to);

	return (0);
}
