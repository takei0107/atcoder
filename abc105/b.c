#include<stdio.h>

int main()
{
    int N, i, j;
    int ans = 0, cmax, dmax;
    scanf("%d", &N);

    cmax = N / 4;
    dmax = N / 7;

    for (i = 0; i <= cmax; i++)
    {
        for (j = 0; j <= dmax; j++)
        {
            if ((4 * i) + (7 * j) == N)
            {
                ans = 1;
                break;
            }
        }
    }

    printf("%s", ans ? "Yes" : "No");
}
