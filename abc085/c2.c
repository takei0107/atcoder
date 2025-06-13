#include<stdio.h>

int main()
{
    int N, Y;
    int x, y, z, total;
    int resx = -1, resy = -1, resz = -1;
    scanf("%d %d", &N, &Y);

    for (x = 0; x <= N; x++)
    {
        for (y = 0; x + y <= N; y++)
        {
            z = N - (x + y);
            total = 10000 * x + 5000 * y + 1000 * z;

            if (total == Y)
            {
                resx = x;
                resy = y;
                resz = z;
            }
        }
    }
    printf("%d %d %d", resx, resy, resz);
}
