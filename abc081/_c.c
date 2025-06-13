#include<stdio.h>

#define INF 99999999;

int main()
{
    int n, i;
    int a[10000];
    int min = INF;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("%d", min);


}
