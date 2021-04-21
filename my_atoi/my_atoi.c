#include <stdio.h>

int leng(int i, const char *str)
{
    int ten = 1;
    int find = 0;
    while (str[i] && find == 0)
    {
        i += 1;
        ten *= 10;
        if (ten == 1000000000)
        {
            find = 1;
        }
    }
    if (find != 1)
        ten /= 10;
    return ten;
}
int ret(const char *str, int indexNumB, int tenB)
{
    int retour = 0;
    while (str[indexNumB])
    {
        retour += tenB * (str[indexNumB] - 48);
        tenB /= 10;
        indexNumB += 1;
    }

    return retour;
}

int valRet(char signeB, int retB)
{
    if (signeB == '-')
        return retB * -1;
    return retB;
}

int boolB(int booSigneB, char c, int booNonNumB)
{
    if (booSigneB > 1)
        return 0;
    if (booSigneB /*NonNum*/ == 1 && (c == 32))
        return 0;
    if (booNonNumB == 1 && (48 > c || c > 57))
        return 0;
    return 1;
}
int my_atoi(const char *str)
{
    int i = 0;
    int booNonNum = 0;
    int booSigne = 0;
    char signe = '+';
    int booPremierNum = 0;
    int indexNum;
    // Cas où après chiffre non num et double signe
    while (str[i])
    {
        if (48 <= str[i] && str[i] <= 57)
            booNonNum = 1;

        if (str[i] == 43 || str[i] == 45)
        {
            booSigne += 1;
            signe = str[i];
        }
        else if ((48 > str[i] || str[i] > 57) && (str[i] != 32))
            return 0;
        if (boolB(booSigne, str[i], booNonNum) == 0)
            return 0;
        if ((48 <= str[i] && str[i] <= 57) && (booPremierNum == 0))
        {
            indexNum = i;
            booPremierNum = 1;
        }
        i += 1;
    }

    int ten = leng(indexNum, str);
    int retour = ret(str, indexNum, ten);
    return valRet(signe, retour);
}
