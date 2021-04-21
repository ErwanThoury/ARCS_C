#include <stdio.h>

int count_lines(const char *file_in)
{
    if (file_in == NULL)
        return -1;

    FILE *fd = fopen(file_in, "r");
    if (fd == NULL)
    {
        return -1;
    }
    int i = 0;

    int c = fgetc(fd);
    //  printf("On a c = %d\n", c);
    if (c == 32) // c != 10) // c == 32)
        i -= 1;
    int temp = c;
    int boo = 0;
    while ((c = fgetc(fd)) != EOF)
    {
        // printf("On a c = %d\n", c);
        if (c == 10)
            i += 1;
        temp = c;

        if (boo != 10)
            boo = 1;
    }
    /*
    if (boo == 0)
        i += 1;
    */
    if (c == EOF && i != 1)
        i += 1;
    // i -= 1;
    // printf("\nOn a i = %d\n", i);
    if (temp == 10 && boo == 0)
        i -= 1;
    fclose(fd);
    return i;
}
/*
int main(void)
{
    printf("On a i = %d\n",count_lines("foo"));
}
*/
