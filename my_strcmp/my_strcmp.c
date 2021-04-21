#include <stdio.h>

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    int y = 0;
    while (s1[i])
        i += 1;
    while (s2[y])
        y += 1;

    if (y > i)
        return -1;
    else if (y < i)
        return 1;
    return 0;
}
