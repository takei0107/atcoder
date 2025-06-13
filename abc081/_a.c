#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int exists = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            exists = 1;
            break;
        }
    }

    printf("%s", exists ? "Yes" : "No");
}
