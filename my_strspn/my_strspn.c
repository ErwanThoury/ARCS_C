#include <stdio.h>
#include <string.h>

size_t my_strspn(const char *s, const char *accept)
{
    /*
    int y;

    int i = 0;
    int tailleS = 0;

    while (s[i] && s[i] != ' ')
    {
        tailleS += 1;
        i += 1;
    }

    i = 0;
    int boo;
    int j;
    while (accept[i])
    {
        y = 0;
        boo = 0;
        j = 0;

        while (s[y])
        {
            while (accept[j])
            {
                if ((accept[j] == s[y]) && (boo != 1)) //(reject[i] != s[y])
                {
                    printf("%c est contenu dans %s\n", s[y], accept);
                    tailleS += 1;
                    boo = 1;
                }
                j += 1;
            }
            y += 1;
        }
        if (boo == 0)
            return tailleS;
        i += 1;
    }
    */
    int tailleS = 0;
    int y = 0;
    int w = 0;
    int boo = 0;

    while (s[y])
    {
        w = 0;
        boo = 0;
        while (accept[w])
        {
            if ((accept[w] == s[y]) && (boo != 1))
            {
                // printf("%c est contenu dans %s\n", s[y], accept);
                tailleS += 1;
                boo = 1;
            }
            w += 1;
        }
        if (boo != 1)

            return tailleS;
        y += 1;
    }
    return tailleS;
}
/*
int main(void)
{
    const char *s = "129th1298";
    const char *accept = "1234567890";

    size_t i = my_strspn(s, accept);
    size_t j = strspn(s, accept);
    printf("my = %ld et unix = %ld", i, j);
}*/
