#include <stdio.h>

void rot_x(char *s, int x)
{
    int i = 0;
    if (s != NULL)
    {
        while (s[i])
        {
            // putchar(s[i]);
            if ((65 <= s[i] && s[i] <= 90))
            {
                int temp = s[i] + x;
                if (temp > 90)
                    s[i] = 64 + temp % 90;
                else if (temp < 65)
                    // s[i] = temp + 26;
                    s[i] = 91 - 65 + temp;
                else
                    s[i] += x;
            }

            if (97 <= s[i] && s[i] <= 122)
            {
                int temp = s[i] + x;
                // printf("%d -> %d\n",s[i] ,temp);
                if (temp > 122)
                    s[i] = 96 + temp % 122;
                else if (temp < 97)
                    s[i] = 123 - 97 + temp;
                else
                    s[i] += x;
            }

            i += 1;
        }
    }
}
