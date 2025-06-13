#include<stdio.h>
#include<stdlib.h>

int comp(const void *p1, const void *p2)
{
    return *(int *)p2 - *(int *)p1;
}

int main()
{
    int N,K;
    int a, tmp[200010] = {0}, kinds = 0;
    int i, ans = 0;
    scanf("%d %d", &N, &K);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a);
        tmp[a - 1]++;
    }

    for (i = 0; i < N; i++)
        if (tmp[i] > 0) kinds++;

    qsort(tmp, N, sizeof(int), comp);

    //for (i = 0; i < N; i++)
    //    printf("i=%d, tmp[%d]=%d\n", i, i, tmp[i]);

    while(kinds > K)
    {
        //printf("kinds=%d\n", kinds);
        //printf("ans+=%d\n", tmp[kinds - 1]);
        ans+=tmp[kinds - 1];
        kinds--;
    }

    printf("%d", ans);
}
