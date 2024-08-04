#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * create_file - creates a file.
 * @filename: the file name
 * @text_content: string of text for the new file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int l = 0;
	int c;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[l])
			l++;

		w = write(fd, text_content, l);

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
