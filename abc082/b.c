#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include<stdlib.h>

int comp(const void *a, const void *b)
{
    char *aa = (char *)a;
    char *bb = (char *)b;

    return *aa - *bb;
}

int rcomp(const void *a, const void *b)
{
    char *aa = (char *)a;
    char *bb = (char *)b;

    return *bb - *aa;
}

int main()
{
    char s[101], t[101];
    size_t slen, tlen;
    int i;
    int ok = 0;

    scanf("%s\n%s", s, t);

    slen = strlen(s);
    tlen = strlen(t);

    qsort(s, slen, sizeof(char), comp);
    qsort(t, tlen, sizeof(char), rcomp);

    for (i = 0; i < tlen; i++)
    {
        if (i > slen - 1) {
            ok = 1;
            break;
        }

        if (s[i] < t[i]) {
            ok = 1;
            break;
        } else if(s[i] > t[i]) {
            break;
        }
    }

    printf("%s", ok ? "Yes" : "No");
    
}
