#include<stdio.h>
#include<stdlib.h>

#define MAX(a, b) a > b ? a : b

int main()
{
    int N;
    int i, X, ans, a, nums[100010] = {0}, num;

    scanf("%d", &N);
    
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a);
        nums[a]++;
    }

    ans = 0;
    for (X = 1; X + 1 < 100010; X++)
    {
        num = nums[X - 1] + nums[X] + nums[X + 1];
        ans = MAX(ans, num);
    }

    printf("%d", ans);
}
