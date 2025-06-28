#include<stdio.h>

int main()
{
    int N, A[101], K;
    int i, ans = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    scanf("%d", &K);

    for (i = 0; i < N; i++)
        if (A[i] >= K) ans++;

    printf("%d", ans);
}
