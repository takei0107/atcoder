#include<stdio.h>

#define INF 99999999

int main()
{
    int N, A[200], i;
    int result = INF;
    int count;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < N; i++)
    {
        count = 0;
        while (A[i] % 2 == 0)
        {
            count++;
            A[i] /= 2;
        }

        if (count < result)
        {
            result = count;
        }
    }

    printf("%d", result);
}
