#include<stdio.h>
#include<string.h>

int main()
{
    char s[200001];
    int i, apos, zpos;
    size_t len;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i] == 'A') 
        {
            apos = i;
            break;
        }
    }

    for (i = len - 1; i >= 0; i--)
    {
        if (s[i] == 'Z')
        {
            zpos = i;
            break;
        }
    }

    printf("%d", zpos - apos + 1);
}
