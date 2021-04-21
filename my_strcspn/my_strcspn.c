#include <stdio.h>
#include <string.h>
size_t my_strcspn(const char *s, const char *reject)
{
    int tailleS = 0;
    int y = 0;
    int w = 0;

    while (s[y])
    {
        w = 0;

        while (reject[w])
        {
            if ((reject[w] == s[y]))
            {
                return tailleS;
            }

            w += 1;
        }
        tailleS += 1;
        y += 1;
    }

    return tailleS;
}
/*
int main(void)
{
    *

    const char *s = "string";
    const char *reject = "";
    const char *s = "d";
    const char *reject = "abcd";


    *
    const char *s = "d";
    const char *reject = "abcd";


    size_t i = my_strcspn(s, reject);
    size_t j = strcspn(s, reject);
    printf("my = %ld et unix = %ld", i, j);
}
*/
