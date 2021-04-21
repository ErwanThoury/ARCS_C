#include <stdio.h>

void my_strlowcase(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (65 <= str[i] && str[i] <= 90)
            str[i] = str[i] + 32;
        i += 1;
    }
}
/*
int main(void)
{
  char str[] = "ABCD1234567890";//"azerty1234XYZ &(";"ABCD1234567890";
  my_strlowcase(str);
  printf("%s\n", str);
  return 0;
}
*/
