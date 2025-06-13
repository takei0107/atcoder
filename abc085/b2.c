#include<stdio.h>

int main()
{
    int N, d[110], bac[110] = {0};
    int i, ans = 0;

    scanf("%d", &N);
    
    for (i = 0; i < N; i++)
    {
        scanf("%d", &d[i]);
    }

    for (i = 0; i < N; i++)
    {
        bac[d[i]]++;
    }

    for (i = 1; i <= 100; i++)
    {
        if (bac[i] > 0) ans++;
    }

    printf("%d", ans);
}
