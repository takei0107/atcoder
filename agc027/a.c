#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comp(const void *p1, const void *p2)
{
    return *(int *)p1 - *(int *)p2;
}

int main()
{
    int N, x;
    int a[110], b[110];
    int i, n, ans = 0;

    scanf("%d %d", &N, &x);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, N, sizeof(int), comp);

    memcpy(b, a, sizeof(int) * N);

    n = x;
    i = 0;

    while (n > 0)
    {
        if (i >= N) i = 0;

        //if (n < a[i]) break;

        b[i] -= a[i] <= n ? a[i] : n;
        n -= a[i];

        i++;
    }

    for (i = 0; i < N; i++)
    {
        if (b[i] == 0) ans++;
    }

    printf("%d", ans);
}
