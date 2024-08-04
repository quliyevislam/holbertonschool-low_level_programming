#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int create_file(const char *file, char *text)
{
    int fd, w, l, c;
    mode_t m = S_IRUSR | S_IWUSR;

    if (file == NULL)
        return (-1);

    fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, m);
    if (fd == -1)
        return (-1);

    if (text != NULL)
    {
        for (l = 0; text[l] != '\0'; l++)
            ;
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

