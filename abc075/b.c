#include <stdio.h>

int main()
{
    int H, W;
    int i, j, k, c;

    scanf("%d %d", &H, &W);
    char S[H + 2][W + 2], *s;

    for (i = 0; i < H + 2; i++)
        for (j = 0; j < W + 2; j++) S[i][j] = '.';


    for (i = 1; i <= H; i++)
    {
        s = S[i] + 1;
        scanf("%s", s);
    }

    for (i = 1; i <= H; i++)
    {
        for (j = 1; j <= W; j++)
        {
            c = 0;

            if (S[i][j] == '#') printf("%c", '#');
            else
            {
                for (k = j - 1; k <= j + 1; k++)
                {
                    if (S[i - 1][k] == '#') c++;
                    if (k != j && S[i][k] == '#') c++;
                    if (S[i + 1][k] == '#') c++;
                }
                printf("%d", c);
            }
        }
        printf("\n");
    }
}
