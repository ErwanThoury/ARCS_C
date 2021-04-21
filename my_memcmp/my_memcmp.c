#include <stdio.h>

int my_memcmp(const void *s1, const void *s2, size_t num)
{
    const char *p1 = s1;
    const char *p2 = s2;
    size_t i = 0;

    while (i != num)
    {
        if (p1[i] != p2[i])
        {
            return (p1[i] - p2[i]);
        }
        i += 1;
    }
    return 0;
}
