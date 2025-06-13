#include<stdio.h>

int istriangle(int a, int b, int c)
{
    int a1 = a, a2 = b, a3 = c;
    int max, s1, s2;

    max = (a1 > a2) ? a1 : a2;
    max = (max > a3) ? max : a3;
    
    if (max == a1)
    {
        s1 = a2;
        s2 = a3;
    }
    else if (max == a2)
    {
        s1 = a3;
        s2 = a1;
    }
    else
    {
        s1 = a1;
        s2 = a2;
    }

    return max < s1 + s2;
}

int main()
{
    int N, L[101];
    int i, j, k;
    int ans = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &L[i]);
    }

    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            for (k = j + 1; k < N; k++)
            {
                if (L[i] != L[j] && L[j] != L[k] && L[k] != L[i])
                {
                    if (istriangle(L[i], L[j], L[k])) ans++;
                }
            }
        }
    }

    printf("%d", ans);
}
