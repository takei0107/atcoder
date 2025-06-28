#include<stdio.h>

#define INF 999999999;

int main()
{
    int N, Q, X[101] = {0};
    int box[101] = {0}, ans[101] = {0}, min;
    int i, j, k;

    scanf("%d %d", &N, &Q);

    for (i = 0; i < Q; i++)
        scanf("%d", &X[i]);

    for (i = 0; i < Q; i++)
    {
        if (X[i] >= 1)
        {
            box[X[i]]++;
            ans[i] = X[i];
        }
        else
        {
            min = INF;
            for (j = 1; j <= N; j++)
            {
                if (box[j] < min)
                {
                    k = j;
                    min = box[j];
                }
            }
            box[k]++;
            ans[i] = k;
        }
    }

    for (i = 0; i < Q; i++)
    {
        printf("%d", ans[i]);
        if (i < Q - 1) printf(" ");
    }
}
