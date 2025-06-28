#include<stdio.h>

#define MAX(a, b) a > b ? a : b
#define MIN(a, b) a < b ? a : b

int main()
{
    int A, B, C, X, Y;
    int x, y, z, base;
    long ans, tmp;

    scanf("%d %d %d %d %d", &A, &B, &C, &X, &Y);

    base = MAX(X, Y);

    ans = (long)(A * X + B * Y);

    // z -> ABピザの枚数
    for (z = 0; z <= base * 2; z+=2)
    {
        x = X - (z / 2);
        y = Y - (z / 2) ;

        if (x < 0) x = 0;
        if (y < 0) y = 0;

        tmp = (A * x + B * y + C * z);
        ans = MIN(ans, tmp);
    }

    printf("%ld", ans);
}
