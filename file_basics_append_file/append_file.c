#include <stdio.h>

int append_file(const char *file_in, const char *content)
{
    if (file_in == NULL)
        return -1;
    if (content == NULL)
        return -1;
    FILE *fd = fopen(file_in, "w");
    if (fd == NULL)
    {
        return -1;
    }
    fseek(fd, 0, SEEK_END);

    fprintf(fd, content);
    fclose(fd);
    return 0;
}

int main(void)
{
    append_file("foo", "ia");
}
