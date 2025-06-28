#include <stdio.h>

int main()
{
    int N, A;
    int i, odd = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A);
        if (A % 2 != 0) odd++;
    }

    if (odd % 2 == 0) printf("%s", "YES");
    else printf("%s", "NO");
}
