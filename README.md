# kolichestvochiselvvode

Количество цифр 
Подсчитать количество цифр в записи натурального числа 
N
N.

Входные данные:
Одно натуральное число 
N
N.

Выходные данные: 
Одно целое число 
k
k -- количество цифр в записи числа 
N


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
