#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    char b[1000];
    int c[100];
    scanf("%s", a);
    getchar();
    scanf("%s", b);
    int l = strlen(a);
    int n = 0;
    for (int x = 0; x < l;)
    {
        n++;
        int na = (a[x] - '0') * 100;
        int nb = (a[x + 1] - '0') * 10;
        int nc = a[x + 2] - '0';
        c[n] = nc + nb + na;

        x += 3;
    }

    int bl = strlen(b);
    int t = 0;
    for (int x = 1; x < n; x++)
    {
        if (t >= bl)
        {
            t = t % bl;
        }
        int nc = c[x];
        int nb = b[t];
        t++;
        unsigned int ans = nc ^ nb;
        char s = ans;
        printf("%c", s);
    }
}