#include<stdio.h>

#define INF 99999999

int main()
{
    int N, i, j, count, result;
    int max = -INF;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        j = i;
        count = 0;
        while (j % 2 == 0)
        {
            count++;
            j /= 2;
        }
        if (max < count){
            max = count;
            result = i;
        } 
    }

    printf("%d", result);
}
