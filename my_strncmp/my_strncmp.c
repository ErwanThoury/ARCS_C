#include <stdio.h>

int len(const char *de, int po)
{
    while (de[po])
        po += 1;
    return po;
}

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    if (s1[0] == '\0' && s2[0] == '\0')
        return 0;
    if (s1[0] == '\0')
        return -1;
    if (s2[0] == '\0')
        return 1;
    size_t i = 0;
    /*
    int y = 0;
    while (s1[y])
        y += 1;

    int z = 0;
    while (s2[z])
        z += 1;
    */
    int y = len(s1, 0);
    int z = len(s2, 0);
    int roar = n;
    if (((z - roar) < 0) && ((y - roar) < 0))
    {
        if (z > y)
            return -1;
        else if (z < y)
            return 1;
        return 0;
    }

    // printf("n-1 = %ld\net z-n = %ld quand y-n = %ld\n", n-1, z-n, y-n);
    while (i != (n))
    {
        if (s1[i] < s2[i])
            return -1;
        else if (s1[i] > s2[i])
            return 1;
        i += 1;
    }
    return 0;
}
/*
int main(void)
{
    char str1[] = "abc";
    char str2[] = "abd";
    size_t n = 3; //-1

    int i = my_strncmp(str1, str2, n);
    int u = strncmp(str1, str2, n);
    printf("mon = %d et unix = %d", i, u);
}
*/
