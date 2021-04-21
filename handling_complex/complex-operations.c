#include <stdio.h>

#include "complex.h"

struct complex neg_complex(struct complex a)
{
    struct complex retour = { .real = -1 * a.real, .img = -1 * a.img };
    return retour;
}

struct complex add_complex(struct complex a, struct complex b)
{
    struct complex retour = { .real = a.real + b.real, .img = a.img + b.img };
    return retour;
}

struct complex sub_complex(struct complex a, struct complex b)
{
    struct complex retour = { .real = a.real - b.real, .img = a.img - b.img };
    return retour;
}

struct complex mul_complex(struct complex a, struct complex b)
{
    float reA = a.real;
    float imA = a.img;
    float reB = b.real;
    float imB = b.img;
    float reAreB = reA * reB;
    float imAimB = imA * imB;
    float reAimB = reA * imB;
    float reBimA = reB * imA;
    struct complex retour = { .real = reAreB - imAimB, .img = reAimB + reBimA };
    return retour;
}

struct complex div_complex(struct complex a, struct complex b)
{
    float reA = a.real;
    float imA = a.img;
    float reB = b.real;
    float imB = b.img;
    float reAreB = reA * reB;
    float imAimB = imA * imB;
    float reAimB = reA * imB;
    float reBimA = reB * imA;
    float reDiv = (reAreB + imAimB) / (reB * reB + imB * imB);
    float imDiv = (reBimA - reAimB) / (reB * reB + imB * imB);
    struct complex retour = { .real = reDiv, .img = imDiv };
    return retour;
}
