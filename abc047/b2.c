#include<stdio.h>

#define MAX(a, b) a > b ? a : b
#define MIN(a, b) a < b ? a : b

int main()
{
    int W, H, N;
    int x, y, a, lx, rx, ly, ry;
    int i, ans;

    scanf("%d %d %d", &W, &H, &N);

    lx = 0;
    rx = W;
    ly = 0;
    ry = H;

    for (i = 0; i < N; i++)
    {
        scanf("%d %d %d", &x, &y, &a);

        if (a == 1) lx = MAX(lx, x);
        else if (a == 2) rx = MIN(rx, x);
        else if (a == 3) ly = MAX(ly , y);
        else ry = MIN(ry, y);
    }
    

    if (lx >= rx || ly >= ry) ans = 0;
    else ans = (rx - lx) * (ry - ly);
    printf("%d", ans);
}

