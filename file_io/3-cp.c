#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

int main(int argc, char *argv[]) {
    int src_fd, dest_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        print_error(97, "Usage: cp file_from file_to");
    }

    src_fd = open(argv[1], O_RDONLY);
    if (src_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (dest_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(src_fd);
        return 0;
    }

    while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(src_fd);
            close(dest_fd);
            exit(0);
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(src_fd);
        close(dest_fd);
        exit(98);
    }

    if (close(src_fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
        close(dest_fd);
        exit(100);
    }

    if (close(dest_fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
        exit(100);
    }

    return 0;
}
