#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * create_file - creates a file.
 * @file: the file name
 * @text: string of text for the new file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *file, char *text)
{
	int fd, w, l, c;

	if (file == NULL)
		return (-1);

fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text != NULL)
	{
		for (l = 0; text[l] != '\0'; l++)
			w = write(fd, text, l);

		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	c = close(fd);
	if (c == -1)
		return (-1);

	return (1);
}
