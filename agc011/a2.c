#include<stdio.h>
#include<stdlib.h>

int comp(const void *p1, const void *p2)
{
    return *(int *)p1 - *(int *)p2;
}

int main()
{
    int N, C, K, T[100010];
    int i, start, ans;

    scanf("%d %d %d", &N, &C, &K);

    for (i = 0; i < N; i++) scanf("%d", &T[i]);
    qsort(T, N, sizeof(int), comp);

    i = 0;
    ans = 0;
    while (i < N)
    {
        ans++;
        start = i;

        while (i < N && T[i] - T[start] <= K && i - start < C) i++;
    }

    printf("%d", ans);
}
