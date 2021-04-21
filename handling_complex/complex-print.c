#include <stdio.h>

#include "complex.h"
void print_complex(struct complex a)
{
    if (a.img < 0)
    {
        printf("complex(%f - %fi)", a.real, -1 * a.img);
    }
    else
    {
        printf("complex(%f + %fi", a.real, a.img);
    }
}
