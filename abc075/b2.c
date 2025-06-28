#include <stdio.h>

int main()
{
    int H, W;
    char S[55][55];
    int x, y, dx, dy, xx, yy, c;

    scanf("%d %d", &H, &W);
    for (y = 0; y < H; y++) scanf("%s", S[y]);

    for (y = 0; y < H; y++)
        for (x = 0; x < W; x++)
        {
            if (S[y][x] == '.')
            {
                c = 0;
                for (dx = -1; dx < 2; dx++)
                    for (dy = -1; dy < 2; dy++)
                    {
                        if (dx == 0 && dy == 0) continue;

                        xx = x + dx;
                        yy = y + dy;

                        if (0 <= xx && xx < W && 0 <= yy && yy < H)
                            if (S[yy][xx] == '#') c++;
                    }
                S[y][x] = '0' + c;
            }
        }

    for (y = 0; y < H; y++) printf("%s\n", S[y]);
}
