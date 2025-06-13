#include<stdio.h>
#include<string.h>
#include<stddef.h>

int main()
{
    char s[100];
    size_t len;
    scanf("%s", s);

    len = strlen(s);

    printf("%c%ld%c", s[0], len - 2, s[len - 1]);
}
