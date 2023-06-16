#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- fn Read text file print to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: w- actual No bytes read and printed
 *        0 when fails or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fdd;
	ssize_t wr;
	ssize_t txt;

	fdd = open(filename, O_RDONLY);
	if (fdd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	txt = read(fdd, buff, letters);
	wr = write(STDOUT_FILENO, buff, txt);

	free(buff);
	close(fdd);
	return (wr);
}
