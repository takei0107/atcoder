#include<stdio.h>

int main()
{
    int N;
    int A[100010], a[100010];
    int i, j;
    int p, m;
    int ans;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    for (i = 0, j = N - 1; i < N; i++, j--)
    {
        a[i] = A[j];
    }

    ans = 1;
    for (i = 0; i < N; i++)
    {
        if (i == 0) p = 1, m = 1;
        else
        {
            if (a[i] > a[i - 1])
            {
                if (p == 0)
                {
                    p = 1;
                    m = 1;
                    ans++;
                }
                else if (p == 1 && m == 1)
                {
                    p = 1;
                    m = 0;
                }
            }
            else if (a[i] < a[i - 1])
            {
                if (m == 0) 
                {
                    p = 1;
                    m = 1;
                    ans++;
                }
                else if (p == 1 && m == 1)
                {
                    p = 0;
                    m = 1;
                }
            }
        }
    }

    printf("%d", ans);
}
