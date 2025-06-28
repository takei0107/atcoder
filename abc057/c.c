#include<stdio.h>

#define MAX(a, b) a > b ? a : b
#define MIN(a, b) a < b ? a : b

#define INF 1L<<30

long _sqrt(long n)
{
    long a = 1;
    while (a * a < n) a++;

    return a;
}

int calcdigits(long n)
{
    int r = 0;

    if (n == 0) return 1;

    while (n > 0)
    {
        r++;
        n /= 10L;
    }
    return r;
}

int main()
{
    long N;
    long A, B, rt;
    int ans = INF, digits;
    scanf("%ld", &N);

    rt = _sqrt(N);

    for (A = 1L; A <= rt; A++)
    {
        if (N % A == 0)
        {
            B = N / A;
            digits = MAX(calcdigits(A), calcdigits(B));
            ans = MIN(ans, digits);
        }
    }
    printf("%d", ans);
}
