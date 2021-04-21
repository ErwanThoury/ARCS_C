#include <stdio.h>

char *my_strncpy(char *dest, const char *source, size_t num)
{
    size_t i = 0;
    char *po = "";
    if (source == po)
    {
        dest[i] = '\0';
        return dest;
    }
    size_t lenSou = 0;
    while (source[lenSou])
        lenSou += 1;
    // printf("taille => %d\n", lenSou);
    while (i != num) //(source[i] != '\0')
    {
        if (!source[i] || lenSou < num)
        {
            dest[i] = '\0';
            i += 1;
        }
        else
        {
            dest[i] = source[i];
            i += 1;
        }
    }
    // dest[i] = '\0';
    return dest;
}
/*
int main(void)
{
    char str_in[] = "";
    size_t n = 42;
    char *s2;
    char *s3;

    s2 = calloc(sizeof(char), (n + 1));
    memset(s2, n, 42);
    my_strncpy(s2, str_in, n);
    puts(s2);
    putchar('\n');
    s3 = calloc(sizeof(char), (n + 1));
    memset(s3, n, 42);
    strncpy(s3, str_in, n);
    puts(s3);
    putchar('\n');

}
*/
