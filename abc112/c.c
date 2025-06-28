#include<stdio.h>
#include<stdlib.h>

#define MAX(a, b) a > b ? a : b

int main()
{
    int N;
    int Cx, Cy, H;
    int x[101], y[101], h[101];
    int i, tmp, ok;
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &h[i]);
    }

    for (Cx = 0; Cx <= 100; Cx++)
        for (Cy = 0; Cy <= 100; Cy++)
        {
            for (i = 0; i < N; i++)
            {
                H = 1;
                if (h[i] > 0)
                {
                    H = h[i] + abs(x[i] - Cx) + abs(y[i] - Cy);
                }
            }

            ok = 1;
            for (i = 0; i < N; i++)
            {
                tmp = MAX(H - abs(x[i] - Cx) - abs(y[i] - Cy), 0);
                if (tmp != h[i]) ok = 0;
            }
            if (ok)
            {
                printf("%d %d %d", Cx, Cy, H);
            }
        }
}
