#include <stdio.h>
#include <stdlib.h>

void mat_mult(int **mat1, int **mat2, size_t *matrices_size, int **out)
{
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    size_t m1 = matrices_size[0];
    size_t m2 = matrices_size[1];
    size_t m3 = matrices_size[2];

    while (i < m1)
    {
        j = 0;
        while (j < m3)
        {
            out[i][j] = 0;
            j += 1;
        }

        i += 1;
    }
    i = 0;
    while (i < m1)
    {
        j = 0;
        while (j < m3)
        {
            k = 0;

            while (k < m2)
            {
                out[i][j] = mat1[i][k] * mat2[k][j] + out[i][j];

                k += 1;
            }

            j += 1;
        }

        i += 1;
    }
}
