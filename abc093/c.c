#include <stdio.h>

#define MAX(a, b) a > b ? a : b

int main()
{
    int A, B, C;
    int x;

    scanf("%d %d %d", &A, &B, &C);

    x = MAX(MAX(A, B), C);

    while (((x * 3) - (A + B + C)) % 2 != 0) x++;

    printf("%d", ((x * 3) - (A + B + C)) / 2);
}
