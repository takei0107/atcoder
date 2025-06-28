#include<stdio.h>
#include<string.h>

int main()
{ 
    char S[100010], R[100010];
    int i, j, len, ok;
    char *a[4] = {"maerd", "remaerd", "esare", "resare"};
    char *r, *p;

    scanf("%s", S);
    len = strlen(S);

    for (i = 0, j = len - 1; i < len && j >= 0; i++, j--)
    {
        R[j] = S[i];
    }
    R[i] = '\0';
    //printf("R=%s\n", R);

    len = strlen(R);
    r = R;

    while (len > 0)
    {
        ok = 0;
        for (i = 0; i < 4; i++)
        {
            p = strstr(r, a[i]);
            if (p - r == 0)
            {
                ok = 1;
                r += strlen(a[i]);
                break;
            }
        }
        if (!ok) break;
        len = strlen(r);
    }

    printf("%s", ok ? "YES" : "NO");
}
