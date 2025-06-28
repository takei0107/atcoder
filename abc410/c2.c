#include<stdio.h>

int main()
{
    int N, Q, A[1000010];
    int offset = 0;
    int type, p, x, k;
    int i;

    scanf("%d %d", &N, &Q);

    for (i = 0; i < N; i++)
        A[i] = i + 1;

    for (i = 0; i < Q; i++)
    {
        scanf("%d", &type);

        if (type == 1)
        {
            scanf("%d %d", &p, &x);
            p--;
            A[(offset + p) % N] = x;
        }
        else if (type == 2)
        {
            scanf("%d", &p);
            p--;
            printf("%d\n", A[(offset + p) % N]);
        }
        else
        {
            scanf("%d", &k);
            offset = (offset + k) % N;
        }
    }
}
