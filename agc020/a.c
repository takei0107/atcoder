#include <stdio.h>

int main()
{
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    if ((B - A) % 2 == 0) printf("%s", "Alice");
    else printf("%s", "Borys");
}
