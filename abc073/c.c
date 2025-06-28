#include <stdio.h>
#include <stdlib.h>

int comp(const void *p1, const void *p2)
{
    return *(int *)p1 - *(int *)p2;
}

int main()
{
    int N, A[100010];
    int i, ans, pre, count;
    
    scanf("%d", &N);

    for (i = 0; i < N; i++) scanf("%d", &A[i]);

    qsort(A, N, sizeof(int), comp);

    ans = 0;
    pre = A[0];
    count = 0;
    for (i = 0; i < N; i++)
    {
        if (pre == A[i])
        {
            if (count % 2 == 0) count++;
            else count--;
        }
        else
        {
            ans += count;
            pre = A[i];
            count = 1;
        }
    }
    ans += count;

    printf("%d", ans);
}
