#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters)
{

int fd;
ssize_t n;
char buf[letters];

n = read(fd, buf, letters);

write(1, buf, letters);

return (n);
}
