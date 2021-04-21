#include <stdio.h>

void display_square(int width)
{
    if (width % 2 != 1)
    {
        width += 1;
    }
    if (width > 2)
    {
        for (int c = 0; c < width; c++)
        {
            putchar(052);
        }
        putchar(012);
        int rowWithSpace = (width + 1) / 2;
        int i = 0;
        while (i != rowWithSpace - 2)
        {
            int y = 0;
            putchar(052);

            while (y != width - 2)
            {
                putchar(' ');
                y += 1;
            }
            putchar(052);
            putchar(012);

            i += 1;
        }
        for (int c = 0; c < width; c++)
        {
            putchar(052);
        }
    }
    else if (width == 1)
    {
        putchar(052);
    }
    putchar(012);
}
