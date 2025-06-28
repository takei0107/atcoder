#include<stdio.h>
#include<stdlib.h>

int comp(const void *p1, const void *p2)
{
    return *(int *)p1 - *(int *)p2;
}

int main()
{
    int N, C, K, T[100010];
    int i, j, t, b, ans;

    scanf("%d %d %d", &N, &C, &K);

    for (i = 0; i < N; i++)
        scanf("%d", &T[i]);

    qsort(T, N, sizeof(int), comp);

    ans = 0;
    i = 0;

    while (i < N)
    {
        b = 1;
        t = T[i] + K;
        for (j = i + 1; b < C && j < N; j++)
        {
            if (T[j] <= t) b++;
            else break;
        }
        i += b;
        ans++;
    }

    printf("%d", ans);
}
