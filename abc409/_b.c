#include<stdio.h>

int main()
{
    int N, x, i, count;
    long A[101], ans = 0;
    scanf("%d", &N);

    for (x = 0; x < N; x++)
    {
        scanf("%ld", &A[x]);
    }

    for (x = N; x >= 0; x--)
    {
        count = 0;
        for (i = 0; i < N; i++)
        {
            if (A[i] >= x) count++;
        }
        if (count >= x)
        {
            ans = x;
            break;
        }
    }
    printf("%d", x);
}
