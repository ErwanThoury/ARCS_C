#include <stdio.h>

int count_words(const char *file_in)
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
    /*if (c == 32) // c != 10) // c == 32)
        i -= 1;
    */
    int boo = 0;
    int temp = c;
    while ((c = fgetc(fd)) != EOF)
    {
        // printf("On a c = %d\n", c);
        if ((c == 10) || (c == 32) || (c == 9))
        // if ((90 < c || c < 65) && (122 < c || c < 97) && (c != 45))
        {
            if ((temp != 10) && (temp != 32) && (temp != 9))
            // if ((90 >= temp && temp >= 65) || (122 >= temp && temp >= 97))
            {
                i += 1;
                boo = 1;
            }
        }
        temp = c;
    }
    /*
    if (c == EOF)
        i += 1;
    */
    // printf("Le dernier caractère est: %d", temp);
    fclose(fd);
    if (i == 0)
        return 0;
    if (temp == 10)
        i -= 1;
    // i -= 1;
    // printf("\nOn a i = %d\n", i);
    if (boo == 1)
        i += 1;

    return i;
}

int main(void)
{
    count_words("foo");
}
