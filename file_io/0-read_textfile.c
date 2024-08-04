#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters)
{

int fd;
ssize_t n;
char *buf = malloc(sizeof(char) * letters);

fd = open(filename, O_RDONLY);

n = read(fd, buf, letters);

close(fd);
write(1, buf, letters);

return (n);
}
