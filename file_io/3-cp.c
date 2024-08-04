#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _exit(int error, char *name, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

int main(int argc, char *argv[])
{
	int fd_1, fd_2, r, w;
	char *buffer[1024];

	if (argc != 3)
		_exit(97, NULL, 0);

	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		_exit(99, argv[2], 0);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		_exit(98, argv[1], 0);

	while ((r = read(fd_1, buffer, 1024)) != 0)
	{
		if (r == -1)
			_exit(98, argv[1], 0);

		w = write(fd_2, buffer, r);
		if (w == -1)
			_exit(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (_exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (_exit(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
