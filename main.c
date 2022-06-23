#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int n,k;
  k = 0;

  scanf("%d", &n);

  while (n != 0)
  {
    n = n / 10;
    k++;
  }

  printf ("%d", k);

    return 0;
}