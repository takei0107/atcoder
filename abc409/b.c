#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b)
{
    return *((long *) b) - *((long *) a);
}

int main()
{
    int N, x;
    long A[101], ans = 0;
    scanf("%d", &N);

    for (x = 0; x < N; x++)
    {
        scanf("%ld", &A[x]);
    }

    qsort(A, N, sizeof(long), comp);

    for (x = N; x > 0; x--)
    {
        if (A[x - 1] >= x) {
            ans = x;
            break;
        }
    }
     
    printf("%ld", ans);
}
