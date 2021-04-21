#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i += 1)
    {
        if (i % 2 == 0)
            puts("Hello Odd!");
        else
            puts("Hello Even!");
        puts(argv[i]);
    }

    return 0;
}
