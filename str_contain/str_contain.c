#include <stdio.h>

int compt(const char *str, const char *params)
{
    int i = 0;
    int y = 0;
    int boo = 0;
    int booPipe = 0;
    int tempi;
    unsigned int compteur = 0;
    while (str[i])
    {
        boo = 0;
        y = 0;
        if (str[i] == params[y])
        {
            tempi = i;
            while (params[y] && booPipe == 0) // != '|')
            {
                if (params[y] != '|')
                {
                    if (str[tempi] != params[y])
                        boo = 1;
                    y += 1;
                    tempi += 1;
                }
                else
                    booPipe = 1;
            }
            if (boo != 1)
                compteur += 1;
        }

        i += 1;
    }

    return compteur;
}

int ind(const char *params)
{
    int y = 0;
    int index = 0;
    while (params[y])
    {
        if (params[y] == '|')
            index = y + 1;
        y += 1;
    }
    return index;
}
unsigned str_contain(const char *str, const char *params)
{
    /*
    int i = 0;
    int y = 0;
    int boo = 0;
    int booPipe = 0;
    int tempi;
    unsigned int compteur = 0;
    int indexPipe = 0;
    while (str[i])
    {
        boo = 0;
        y = 0;
        if (str[i] == params[y])
        {
            tempi = i;
            while (params[y] && booPipe == 0) // != '|')
            {
                if (params[y] != '|')
                {
                    if (str[tempi] != params[y])
                        boo = 1;
                    y += 1;
                    tempi += 1;
                }
                else
                    booPipe = 1;
            }
            if (boo != 1)
                compteur += 1;
        }

        i += 1;
    }

    y = 0;
    */
    int y = 0;
    unsigned int compteur = compt(str, params);
    /*
        int indexPipe = 0;
        while (params[y])
        {
            if (params[y] == '|')
                indexPipe = y + 1;
            y += 1;
        }
    */
    int indexPipe = ind(params);
    if (indexPipe == 0)
        return compteur;
    // i = 0;
    int tempi;
    int i = 0;
    int boo = 0;
    while (str[i])
    {
        boo = 0;
        y = indexPipe;
        if (str[i] == params[y])
        {
            tempi = i;
            while (params[y])
            {
                if (str[tempi] != params[y])
                    boo = 1;
                y += 1;
                tempi += 1;
            }
            if (boo != 1)
                compteur += 1;
        }

        i += 1;
    }
    return compteur;
}
/*
int main(void)
{
    printf("%u\n", str_contain("Minimorpho", "pho"));

    return 0;
}
*/
