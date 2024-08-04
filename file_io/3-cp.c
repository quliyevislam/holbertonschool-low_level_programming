#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int o, o_2, w;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	o_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (o_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((w = read(o, buffer, 1024)) > 0)
	{
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(o_2, buffer, w);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(o) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o), exit(100);
	if (close(o_2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o_2), exit(100);

	return (0);
}
