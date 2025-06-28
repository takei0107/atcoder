#include<stdio.h>

int main()
{
    int N, Q;
    int i, j, k, x;
    int box[101] = {0};

    scanf("%d %d", &N, &Q);

    for (i = 0; i < Q; i++)
    {
        scanf("%d", &x);

        if (x >= 1)
        {
            box[x]++;
            printf("%d", x);
        }
        else
        {
            j = 1;
            for (k = 2; k <= N; k++)
            {
                if (box[j] > box[k]) j = k;
            }
            box[j]++;
            printf("%d", j);
        }

        if (i < Q - 1) printf(" ");
    }
}
