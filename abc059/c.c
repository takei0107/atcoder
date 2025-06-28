#include<stdio.h>

#define MIN(a, b) a < b ? a : b

int main()
{
    int n, a[100010];
    int i, sign;
    long sum, plusc, minusc;

    scanf("%d", &n);

    // debug
    // printf("n=%d\n", n);

    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    // 先頭が正の場合
    sign = 1;
    sum = 0L;
    plusc = 0L;
    for (i = 0; i < n; i++)
    {
        // debug
        // printf("a[%d]=%d\n", i, a[i]);

        sum += a[i];

        if (sign == 1)
        {
            if (sum <= 0)
            {
                plusc += (1 - sum);
                sum = 1;
            }
        }
        else
        {
            if (sum >= 0)
            {
                plusc += (sum + 1);
                sum = -1;
            }
        }
        
        sign *= -1;
    }

    // 先頭が負の場合
    sign = -1;
    sum = 0L;
    minusc = 0L;
    for (i = 0; i < n; i++)
    {
        sum += a[i];

        if (sign == 1)
        {
            if (sum <= 0)
            {
                minusc += (1 - sum);
                sum = 1;
            }
        }
        else
        {
            if (sum >= 0)
            {
                minusc += (sum + 1);
                sum = -1;
            }
        }

        sign *= -1;
    }

    printf("%ld", MIN(plusc, minusc));
}
