#include<stdio.h>

int main()
{
    int N, Q, A[1000001], tmp[1000001];
    int top, type, ni;
    int i, n;
    int p, k, x;

    scanf("%d %d", &N, &Q);

    n = 0;
    for (i = 0; i <= N; i++)
    {
        A[i] = n++;
        tmp[i] = A[i];
    }
    top = 1;

    for (i = 0; i < Q; i++)
    {
        scanf("%d", &type);
        
        if (type == 1)
        {
            scanf("%d %d", &p, &x);
            ni = top + (p - 1);
            if (ni > N) ni = ni - N;
            A[ni] = x;
        }
        else if (type == 2)
        {
            scanf("%d", &p);
            ni = top + (p - 1);
            if (ni > N) ni = ni - N;
            printf("%d\n", A[ni]);
        }
        else
        {
            scanf("%d", &k);
            top += (k % N);
            if (top > N) top = top - N;
        }
    }
}
