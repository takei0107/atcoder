#include <stdio.h>

#define MAX(a, b) a > b ? a : b

int main()
{
    int v[3];
    int i, ans = 0, max;
    int odd = 0, even = 0;

    for (i = 0; i < 3; i++) scanf("%d", &v[i]);

    for (i = 0; i < 3; i++)
    {
        if (v[i] % 2 == 0) even++;
        else odd++;
    }

    if (even == 2)
    {
        ans++;
        for (i = 0; i < 3; i++)
        {
            if (v[i] % 2 == 0) v[i]++;
        }
    }
    else if (odd == 2)
    {
        ans++;
        for (i = 0; i < 3; i++)
        {
            if (v[i] % 2 != 0) v[i]++;
        }
    }

    max = MAX(MAX(v[0], v[1]), v[2]);
    for (i = 0; i < 3; i++) ans += (max - v[i]) / 2;

    printf("%d", ans);
}
