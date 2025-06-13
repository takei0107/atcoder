#include<stdio.h>

int main()
{
    int N, A, B;
    int sum = 0;
    int i, j, k;
    scanf("%d %d %d", &N, &A, &B);

    for (i = 1; i <= N; i++)
    {
        j = i;
        k = 0;
        while (j > 0)
        {
            k += j % 10;
            j /= 10;
        }
        if (k >= A && k <= B) sum += i;
    }
    printf("%d", sum);
}
