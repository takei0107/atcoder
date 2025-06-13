#include<stdio.h>

int main()
{
    int N;
    int i, j;
    int ok = 0;
    scanf("%d", &N);

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i * j == N)
            {
                ok = 1;
                break;
            }
        }
    }
    printf("%s", ok ? "Yes" : "No");
}
