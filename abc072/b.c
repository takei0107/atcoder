#include<stdio.h>
#include<string.h>

int main()
{
    char s[100010];
    size_t len, i;

    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if ((i + 1) % 2 != 0)
        {
            printf("%c", s[i]);
        }
    }
}
