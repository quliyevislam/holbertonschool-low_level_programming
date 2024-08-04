#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int src_fd, dest_fd;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);

umask(0000);
src_fd = open(argv[1], O_RDONLY);

if (src_fd == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (dest_fd == -1)
{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(src_fd), exit(99);
}
while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
{
	bytes_written = write(dest_fd, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(src_fd), close(dest_fd), exit(99);
	}
}

if (bytes_read == -1)
{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	close(src_fd), close(dest_fd), exit(98);
}
if (close(src_fd) == -1)
{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd), close(dest_fd);
	exit(100);
}
if (close(dest_fd) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);

return (0);
}
