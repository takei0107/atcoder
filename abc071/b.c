#include<stdio.h>
#include<string.h>

#define NUM 26

int main()
{
    char S[100010];
    int len, i, count[NUM] = {0};
    char ans[5] = "None";

    scanf("%s", S);

    len = strlen(S);

    for (i = 0; i < len; i++)
    {
        count[S[i] - 'a']++;
    }


    for (i = 0; i < NUM; i++)
    {
        if (count[i] == 0)
        {
            //printf("%c", (char)('a' + i));
            sprintf(ans, "%c", (char)('a' + i));
            break;
        }
    }

    printf("%s", ans);
}
