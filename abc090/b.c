#include<stdio.h>

int main()
{
    int A, B;
    int i, j, k, arr[5], ans = 0;
    scanf("%d %d", &A, &B);

    for (i = A; i <= B; i++)
    {
        j = i;
        k = 0;
        while (j > 0)
        {
            arr[k++] = j % 10;
            j /= 10;
        }
        if (arr[0] == arr[4] && arr[1] == arr[3]) ans++;
    }

    printf("%d", ans);
}
