#include<stdio.h>

int main()
{
    int A, B, C, X;
    int i, j, k;
    int ans = 0;
    scanf("%d\n%d\n%d\n%d", &A, &B, &C, &X);

    for (i = 0; i <= A; i++)
    {
        for (j = 0; j <= B; j++)
        {
            k = (X - ((500 * i) + (100 * j))) / 50;
            if (k >= 0 && k <= C)
            {
                ans++;
            } 
        }
    }
    printf("%d", ans);
}
