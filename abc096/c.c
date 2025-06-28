#include <stdio.h>

int main()
{
    int H, W;
    char s[55][55];
    int i, x, y, dx, dy, xx, yy, can, ans;

    scanf("%d %d", &H, &W);

    for (i = 0; i < H; i++) scanf("%s", s[i]);

    ans = 1;
    for (x = 0; x < W; x++)
        for (y = 0; y < H; y++)
        {
            can = 0;
            if (s[y][x] == '#')
            {
                for (dx = -1; dx < 2; dx++)
                    for (dy = -1; dy < 2; dy++)
                    {
                        if ((dx == -1 && dy == 0) || (dx == 0 && dy == -1) || (dx == 1 && dy == 0) ||(dx == 0 && dy == 1))
                        {
                            xx = x + dx;
                            yy = y + dy;

                            if (xx >= 0 && xx < W && yy >= 0 && yy < H)
                                if (s[yy][xx] == '#') can = 1;
                        }
                    }

                if (!can)
                {
                    printf("%s", "No");
                    return 0;
                }
            }
        }

    printf("%s", "Yes");
}
