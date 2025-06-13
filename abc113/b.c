#include<stdio.h>
#include<math.h>

#define INF 99999999

int main()
{
    unsigned int N, T, H[100000], i, ans;
    signed int A;
    double min = INF, avg, diff;

    scanf("%d", &N);
    scanf("%d %d", &T, &A);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &H[i]);
    }

    for (i = 0; i < N; i++)
    {
        avg = T - H[i] * 0.006;
        diff = fabs((double)A - avg);
        if (diff < min)
        {
            ans = i + 1;
            min = diff;
        }
    }

    printf("%d", ans);
}
