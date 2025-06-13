#include<stdio.h>

int main()
{
    int N, Y;
    int x, y, z, tmp, exists = 0;

    scanf("%d %d", &N, &Y);

    for (x = 0; x <= N; x++)
    {
        for (y = 0; y <= N; y++)
        {
            tmp = Y - (10000 * x + 5000 * y);
            if (tmp >= 0 && tmp % 1000 == 0)
            { 
                z = tmp / 1000;
                if (x + y + z == N)
                {
                    exists = 1;
                    break;
                }
            }
        }

        if (exists) break;
    }

    if (exists) printf("%d %d %d", x, y, z);
    else printf("-1 -1 -1");
}
