#include "main.h"

/**
 * append_text_to_file - Fn Appends text at the end of a file.
 * @filename: A pointer to the name.
 * @text_content: The string to add to the end.
 * Return: Null or -1 or 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, leng);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
