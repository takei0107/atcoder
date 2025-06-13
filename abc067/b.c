#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int K,N;
    int l[51];
    int i, ans = 0;

    scanf("%d %d", &N, &K);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &l[i]);
    }

    qsort(l, N, sizeof(int), comp);

    for (i = 0; i < K; i++)
    {
        ans += l[i];
    }

    printf("%d", ans);
}
