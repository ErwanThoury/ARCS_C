#include <stdio.h>

int main(void)
{
    int i = 0;
    int y;
    while (i != 10)
    {
        y = 0;
        if (i % 2 == 0)
        {
            while (y != 10)
            {
                if (y % 2 == 0)
                {
                    putchar('O');
                }
                else
                {
                    putchar('X');
                }
                y += 1;
            }
        }
        else
        {
            while (y != 10)
            {
                if (y % 2 == 0)
                {
                    putchar('X');
                }
                else
                {
                    putchar('O');
                }
                y += 1;
            }
        }
        i += 1;
        putchar('\n');
    }
}
