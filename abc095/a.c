#include<stdio.h>

int main()
{
    char S[3];
    int sum = 700;

    scanf("%s", S);

    if (S[0] == 'o') sum += 100;
    if (S[1] == 'o') sum += 100;
    if (S[2] == 'o') sum += 100;

    printf("%d", sum);
}
