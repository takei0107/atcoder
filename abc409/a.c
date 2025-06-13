#include<stdio.h>

int main()
{
    int N, i;
    char T[101], A[101];
    int exist = 0;

    scanf("%d", &N);

    scanf("%s", T);
    scanf("%s", A);

    for (i = 0; i < N; i++)
    {
       if (T[i] == 'o' && A[i] == 'o') exist = 1;
    }

    printf("%s", exist ? "Yes" : "No");
}
