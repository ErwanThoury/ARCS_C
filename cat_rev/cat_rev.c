#include <stdio.h>
int taille(char *s)
{
    int taille = 0;
    while (s[taille])
    {
        taille += 1;
    }

    return taille;
}
void swap(char *s, int i, int y)
{
    int temp = s[i];
    s[i] = s[y];
    s[y] = temp;
}
int main(int argc, char *argv[])
{
    if (2 > argc || argc > 2)
    {
        return 1;
    }
    else
    {
        char *path = argv[1];
        FILE *fd = fopen(path, "r");
        if (!fd)
        {
            return 2;
        }
        else
        {
            char sr[512];
            int i;
            int y;
            while (fgets(sr, 512, fd) != NULL)
            {
                // fputs(sr, fd);
                i = taille(sr);

                y = 0;
                while (y != (i / 2))
                {
                    /*
                    printf("On échange la %dème et la %dème pos soit %c et
                      %c\n",i-1,y, sr[i-1], sr[y]);
                    */
                    swap(sr, i - 2 - y, y);
                    y += 1;
                }
                // sr[i - 1] = '\0';
                fputs(sr, stdout);
                /*
                                tail = taille(sr) - 2;
                                i = 0;
                                while (sr[i])
                                {
                                    if (tail - i != -1)
                                    {
                                        putchar(sr[tail - i]);
                                    }
                                    i += 1;
                                }
                                putchar('\n');
                */
            }

            fclose(fd);
            return 0;
        }
    }
}
