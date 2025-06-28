#include<stdio.h>

int main()
{
    int c[3][3];
    int i,j, count, ok = 0;
    int a1, a2, a3;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &c[i][j]);

    for (a1 = 0; a1 <= 100; a1++)
        for (a2 = 0; a2 <= 100; a2++)
            for (a3 = 0; a3 <= 100; a3++)
            {
                count = 0;
                for (j = 0; j < 3; j++)
                {
                    if (c[0][j] - a1 == c[1][j] - a2 && c[1][j] - a2 == c[2][j] - a3) count++;
                }
                if (count == 3) ok = 1;
            }

    printf("%s", ok ? "Yes" : "No");
}
