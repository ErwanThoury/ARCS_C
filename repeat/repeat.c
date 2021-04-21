#include <stdio.h>

int main(int argc, char *argv[])
{
    // printf("argc = %d\n", argc);
    if (3 < argc || argc <= 2)
        return 1;
    int i = 0;
    int comp = *argv[2] - 48;
    while (argv[2][i])
    {
        i += 1;
        // printf("p = %d\n",argv[2][i]);
    }

    if (i > 1)
    {
        // printf("On a comp = %d", comp);
        return 1;
    }
    i = 0;
    // printf("On a comp = %d", comp);
    while (i != comp)
    {
        puts(argv[1]);
        i += 1;
    }
    return 0;
}
