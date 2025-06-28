#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, t, tp;
    int i, x, xp, y, yp, ok;

    scanf("%d", &N);

    tp = 0, xp = 0, yp = 0;
    ok = 1;
    for (i = 0; i < N; i++)
    {
        if (!ok) break;

        scanf("%d %d %d", &t, &x, &y);

        if (t - tp >= abs(x - xp) + abs(y - yp))
        {
            if (t % 2 == 0 && (x + y) % 2 != 0) ok = 0;
            else if (t % 2 != 0 && (x + y) % 2 == 0) ok = 0;
        }
        else
        {
            ok = 0;
        }

        tp = t;
        xp = x;
        yp = y;
    }

    printf("%s", ok ? "Yes" : "No");

}
