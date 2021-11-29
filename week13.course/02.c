#include <stdio.h>

int main()
{
    char *aPrt, a;
    aPrt = &a;
    int num = 0;
    scanf("%c", aPrt);
    if (*aPrt == 'a')
    {
        for (int n = 97; n <= 122; n++)
        {
            printf("%c\t", n);
            num++;
        }
    }
    else
    {
        for (int n = 65; n <= 90; n++)
        {
            printf("%c\t", n);
            num++;
        }
    }
}