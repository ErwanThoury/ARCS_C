#include <stdio.h>
int len(const char *t)
{
    int lenH = 0;
    while (t[lenH])
        lenH += 1;
    return lenH;
}
int my_strstr(const char *haystack, const char *needle)
{
    int lenH = len(haystack);
    int lenN = len(needle);
    /*
    int lenH = 0;
    int lenN = 0;

    while (haystack[lenH])
        lenH += 1;
    while (needle[lenN])
        lenN += 1;
    */
    if (lenN == 0)
        return 0;
    if (lenN > lenH)
        return -1;
    int i = 0;
    int y = 0;
    int ind;
    int boo = 0;
    while (haystack[i])
    {
        boo = 0;
        y = 0;
        if (haystack[i] == needle[y])
        {
            ind = i;
            /*
            i += 1;
            y += 1;
            */
            while (needle[y])
            {
                /*
                i += 1;
                y += 1;
                */
                if ((y == lenN - 1) && (boo != 1)) // && (y )
                    return ind;
                // printf("On a%c \n

                if (haystack[i] != needle[y])
                    boo = 1;

                i += 1;
                y += 1;
            }
        }

        i += 1;
    }
    return -1;
}
/*
int main(void)
{

    my_strstr("hello", "GOODBYE"); //-1
    my_strstr("string", "trin") //1
    my_strstr("aaaaaaa", "a") //0
    my_strstr("abcd", "d") //3

    // int i = my_strstr("aaaaaaa", "a");//0
    return 0;
}
*/
