#include <stdio.h>

int fatorial(int n);

int main() {

  int num;

  printf("digite um número natural: ");
  scanf("%d", &num);

  printf("\n%d! = %d", num, fatorial(num));

  return 0;
}

int fatorial(int n) {
  
  int m;

  for (m = 1; n > 1; n--) {
    m *= n;

  }
  return m;
}
