#include<stdio.h>

int main()
{
    int i, N, X, m[1001];
    int ans = 0, lowest = 99999;
    scanf("%d %d", &N, &X);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &m[i]);
    }

    for (i = 0; i < N; i++)
    {
        ans++;
        X -= m[i];
        if (m[i] < lowest) lowest = m[i];
    } 
    
    printf("%d", ans + (X / lowest));
}
