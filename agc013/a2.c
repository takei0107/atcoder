#include<stdio.h>

int main()
{
    int N, A[100010];
    int i, ans;

    scanf("%d", &N);

   for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    ans = 0;
    for (i = 0; i < N; i++)
    {
        // equal
        while(i + 1 < N && A[i] == A[i + 1]) i++;

        // up
        if (i + 1 < N && A[i] < A[i + 1])
            while (i + 1 < N && A[i] <= A[i + 1]) i++;
        // down
        else if (i + 1 < N && A[i] > A[i + 1])
            while (i + 1 < N && A[i] >= A[i + 1]) i++;
        
        ans++;
    }

    printf("%d", ans);
}
