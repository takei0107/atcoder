#include<stdio.h>

int main()
{
    int N, M, a[51], b[51], count[51] = {0};
    int i;
    scanf("%d %d", &N, &M);

    for (i = 0; i < M; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (i = 0; i < M; i++)
    {
        count[a[i]]++;
        count[b[i]]++;
    }

    for (i = 1; i <= N; i++)
    {
        printf("%d\n", count[i]);
    }
}
