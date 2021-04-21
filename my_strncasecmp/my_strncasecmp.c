#include <stdio.h>
#include <strings.h>

int my_strncasecmp(const char *s1, const char *s2, size_t n)
{
    int i = 0;
    int siz = n + 1;

    int y = 0;

    while (s1[i] && (i != siz))
        i += 1;
    while (s2[y] && (y != siz))
        y += 1;

    size_t tempi = 0;
    if (i < y)
        return -10;
    else if (i > y)
        return 10;
    /*
    else
    {
        return 0; // s1[0] - s2[0];
    }
    */
    while (tempi < n) //(s1[tempi])
    {
        if ((s1[tempi] >= 97) && (65 <= s2[tempi] && s2[tempi] <= 90))
            /*
            && ((s1[tempi] > (s2[tempi] + 32))
                || (s1[tempi] < (s2[tempi] + 32))))
            */
            return s1[tempi] - (s2[tempi] + 32);

        else if ((65 <= s1[tempi] && s1[tempi] <= 90) && (s2[tempi] >= 97))
            /*
                 && (((s1[tempi] + 32) > s2[tempi])
                      || ((s1[tempi] + 32) < s2[tempi])))
             */
            return (s1[tempi] + 32) - s2[tempi];

        else
        {
            // return 0;

            if ((s1[tempi]) > s2[tempi])
                return 3333;
            if ((s1[tempi]) < s2[tempi])
                return -3333;
        }

        tempi += 1;
    }
    return 0;
}

int main(void)
{
    /*
    char *s1 = "sTring1";
    char *s2 = "string1";
    */
    /*
        char *s1 = "AbCdEfGhIjKlmnopQRSTuvWxyz"; // 20
        char *s2 = "abcdEFGHijKLmnOpQrSTUVwxyZ";
    */
    /*
        char *s1 = "acu"; // 2
        char *s2 = "ing1";
    */
    /*
    char *s1 = "a"; //0
    char *s2 = "b";
    */
    /*
        int ref = strncasecmp(s1, s2, 20);
        int p = my_strncasecmp(s1, s2, 20);
        printf("p = %d et ref = %d\n", p, ref);
    */
}
