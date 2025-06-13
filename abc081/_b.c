#include<stdio.h>

int main()
{
    int n, i;
    int a[10000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            result++;
        }
    }
    printf("%d", result);
}
