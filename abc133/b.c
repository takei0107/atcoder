#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int N, D;
    int X[11][11];
    int i, j, k, result = 0;
    double tmp;
    scanf("%d %d", &N, &D);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < D; j++)
        {
            scanf("%d", &X[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            tmp = 0;
            for (k = 0; k < D; k++)
            {
                //printf("i=%d, j=%d, k=%d\n", i,j,k);
                tmp += pow(abs(X[i][k] - X[j][k]), 2);
            }
            tmp = sqrt(tmp);
            //printf("tmp=%f\n", tmp);
            if (tmp == (double)(int)tmp) result++;
        }
    }
    printf("%d", result);
}
