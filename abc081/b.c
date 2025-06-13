#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    long A[N];
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%ld", &A[i]);
    }

    int esc = 0;
    int result = 0;
    while(1)
    {
        for (i = 0; i < N; i++)
        {
            if (A[i] % 2 == 0) {
                A[i] /= 2;
            } else {
                esc = 1;
                break;
            }
        }
        if (esc) break;
        result++;
    }
    printf("%d\n", result);
}
