#include<stdio.h>

int main()
{
  int N,A;

  scanf("%d", &N);
  scanf("%d", &A);

  int amari = N % 500;

  if (A - amari >= 0) {
    printf("Yes");
  } else {
    printf("No");
  }
}

