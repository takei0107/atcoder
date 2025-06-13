#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int comp(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main()
{
    int N, L;
    int i;
    char s[101][101];
    char ans[11000];

    scanf("%d %d", &N, &L);

    for (i = 0; i < N; i++)
    {
        scanf("%s", s[i]);
    }

    qsort(s, N, sizeof(char) * 101, comp);

    for (i = 0; i < N; i++)
    {
        strcat(ans, s[i]);
    }

    printf("%s", ans);

}
