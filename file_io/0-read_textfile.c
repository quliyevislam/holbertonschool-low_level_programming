#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the name of the file
 * @letters: size
 *
 * Return: actual number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t n;
	char *buffer;
	
	if (!filename)
		return (0);
	
	o = open(filename, O_RDONLY);
	
	if(o == -1)
		return (0);
	
	buffer = malloc(sizeof(char) * letters);

	if (read(o, buffer,letters) == -1)
	{	
		free(buffer);
		return (0);
	}
	
	n = write(1,buffer,letters);
	
	if (n == -1 || n != letters)
	{
		free(buffer);
		return (0);
	}

	close(o);

	return (n);
}

