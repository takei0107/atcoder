#include<stdio.h>
#include<string.h>

#define MAX(a, b) a > b ? a : b

int main()
{
    int N,M;
    char s[110][11], t[110][11];
    int i, j, point, ans = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%s", s[i]);

    scanf("%d", &M);

    for (i = 0; i < M; i++)
        scanf("%s", t[i]);

    for (i = 0; i < N; i++)
    {
        point = 0;

        for (j = 0; j < N; j++)
            if (strcmp(s[i], s[j]) == 0) point++;
        for (j = 0; j < M; j++)
            if (strcmp(s[i], t[j]) == 0) point--;

        ans = MAX(point, ans);
    }

    printf("%d", ans);
}

