#include<stdio.h>

#define INF 10000000000

int main()
{
    int N, i;
    long A[100], min, max;

    min = INF;
    max = -INF;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%ld", &A[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (min > A[i]) min = A[i];
        if (max < A[i]) max = A[i];
    }

    printf("%ld", max - min);
}
