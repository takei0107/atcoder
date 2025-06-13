#include<stdio.h>

int main()
{
    int W, H, N;
    int x[101], y[101], a[101];
    int i, j, k;
    int matrix[101][101] = {{0}};
    int ans = 0;

    scanf("%d %d %d", &W, &H, &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &a[i]);
    }

    for (i = 0; i < H; i++)
    {
        for (j = 0; j < W; j++)
        {
            matrix[i][j] = 1;
        }
    }

    for (i = 0; i < N; i++)
    {
        if (a[i] == 1)
        {
            for (j = 0; j < H; j++)
            {
                for (k = 0; k < x[i]; k++)
                {
                    matrix[j][k] = 0;
                }
            }
        }
        else if (a[i] == 2)
        {
            for (j = 0; j < H; j++)
            {
                for (k = x[i]; k < W; k++)
                {
                    matrix[j][k] = 0;
                }
            }
        }
        else if (a[i] == 3)
        {
            for (j = 0; j < y[i]; j++)
            {
                for (k = 0; k < W; k++)
                {
                    matrix[j][k] = 0;
                }
            }
        }
        else
        {
            for (j = y[i]; j < H; j++)
            {
                for (k = 0; k < W; k++)
                {
                    matrix[j][k] = 0;
                }
            }
        }
    }

    for (i = 0; i < H; i++)
    {
        for (j = 0; j < W; j++)
        {
            ans+=matrix[i][j];
        }
    }

    printf("%d", ans);

}
