#include <stdio.h>

int simple_fnmatch(const char *pattern, const char *string)
{
    int i = 0;

    while (pattern[i])
    {
        if ((pattern[i] != string[i])
            && ((pattern[i] != '?') || (string[i] != '?')))
            return FNM_NOMATCH;
        i += 1;
    }
    return 0;
}
