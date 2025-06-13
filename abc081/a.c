#include<stdio.h>

int main()
{
    char S[3];
    int sum = 0;

    scanf("%s", S);

    if (S[0] == '1') sum++;
    if (S[1] == '1') sum++;
    if (S[2] == '1') sum++;
    printf("%d", sum);
}
