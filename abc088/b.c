#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int N, a[101];
    int i;
    int alice = 0, bob = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, N, sizeof(int), comp);

    for (i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            alice += a[i];
        }
        else
        {
            bob += a[i];
        }
    }

    printf("%d", alice - bob);
    
}
