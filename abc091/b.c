#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX(a, b) a > b ? a : b

typedef struct {
    char *key;
    signed int count;
} Bucket;

int buckets_add(Bucket *buckets[], int size, char *key, int increment)
{
    int i, exists = 0;
    Bucket *buck;
    char *str;

    //printf("before size=%d, key=%s\n", size, key);

    for (i = 0; i < size; i++)
    {
        buck = buckets[i]; 
        //printf("buck->key=%s, key=%s\n", buck->key, key);
        if (strcmp(buck->key, key) == 0)
        {
            if (increment) buck->count++;
            else buck->count--;
            exists = 1;
            break;
        }
    }

    if (!exists)
    {
        buck = (Bucket *)malloc(sizeof(Bucket));
        str = (char *)malloc(sizeof(char) * (strlen(key) + 1));
        strcpy(str, key);
        buck->key = str;
        if (increment) buck->count = 1;
        else buck->count = -1;
        buckets[size++] = buck;
    }
    //printf("after size=%d, key=%s, exists=%d\n", size, key, exists);

    return size;
}

int main()
{
    int N, M;
    int i, size = 0, max = 0;
    char s[11];

    Bucket *bucks[220];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%s", s);
        size = buckets_add(bucks, size, s, 1);
    }

    scanf("%d", &M);

    for (i = 0; i < M; i++)
    {
        scanf("%s", s);
        size = buckets_add(bucks, size, s, 0);
    }

    for (i = 0; i < size; i++)
    {
        //printf("size=%d\n", size);
        //printf("key=%s, count=%d\n", bucks[i]->key, bucks[i]->count);
        max = MAX(bucks[i]->count, max);
    }

    printf("%d", max);
}
