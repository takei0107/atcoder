#include<stdio.h>
#include<stdlib.h>

int comp(const void *p1, const void *p2)
{
    return *(int *)p1 - *(int *)p2;
}

int main()
{
    int N, d[101];
    int i, j, pre;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &d[i]);
    }

    qsort(d, N, sizeof(int), comp);

    pre = -1;
    j = 0;
    for (i = 0; i < N; i++)
    {
        if (d[i] != pre)
        {
            pre = d[i];
            j++;
        }
    }

    printf("%d", j);
}
