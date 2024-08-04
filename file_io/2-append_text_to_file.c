#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int cl;
	int len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	wr = write(fd, text_content, len);
	}

	if (wr == -1)
		return (-1);

	cl = close(fd);
	if (cl == -1)
		return (-1);

	return (1);
}
