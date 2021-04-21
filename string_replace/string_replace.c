#include <stdio.h>
#include <stdlib.h>

int taille(const char *tab)
{
    int tail = 0;
    while (tab[tail])
        tail += 1;

    return tail;
}

int nbRem(const char *tab, char c)
{
    int nb = 0;
    int i = 0;
    while (tab[i])
    {
        if (tab[i] == c)
            nb += 1;
        i += 1;
    }
    return nb;
}

int nvS(const char *strT, char cT, const char *patternT)
{
    int tailNvS;
    if (patternT == NULL)
    {
        tailNvS = taille(strT) + nbRem(strT, cT) * -1;
    }
    else
    {
        tailNvS = taille(strT) + (taille(patternT) - 1) * nbRem(strT, cT);
    }
    tailNvS += 1;
    return tailNvS;
}
// void init(
char *string_replace(char c, const char *str, const char *pattern)
{
    if (str == NULL)
        return NULL;
    int tailNvS = nvS(str, c, pattern);
    /*
    int tailNvS;
    if (pattern == NULL)
    {
        tailNvS = taille(str) + nbRem(str, c) * -1;
    }
    else
    {
        tailNvS = taille(str) + (taille(pattern) - 1) * nbRem(str, c);
    }
    tailNvS += 1;
    */
    char *tabRet = malloc(tailNvS * sizeof(char));

    int i = 0;
    int y = 0;
    while (i != tailNvS - 1)
    {
        tabRet[i] = ' ';
        i += 1;
    }

    int p;
    /*
    while (tabRet[i])
    {

        i += 1;
    }
    */
    i = 0;

    while (tabRet[i])
    {
        p = 0;
        if (str[y] != c)
        {
            tabRet[i] = str[y];

            i += 1;
        }
        else
        {
            if (pattern != NULL)
            {
                while (pattern[p])
                {
                    tabRet[i] = pattern[p];
                    i += 1;
                    p += 1;
                }
            }
        }
        y += 1;
    }

    return tabRet;
}
