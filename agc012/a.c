#include<stdio.h>
#include<stdlib.h>

int comp(const void *p1, const void *p2)
{
    return *(int *)p2 - *(int *)p1;
}

int main()
{
    int N, a[300003], b[100001][3];
    int i, j; 
    long ans = 0L;

    scanf("%d", &N);
    for (i = 0; i < 3 * N; i++)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, 3 * N, sizeof(int), comp);

    for (i = 1; i < 2 * N; i+=2)
    {
        ans += a[i];
    }


    printf("%ld", ans);

}
