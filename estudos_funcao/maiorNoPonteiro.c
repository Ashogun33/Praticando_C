#include <stdio.h>

int maiorNumero(int a, int b, int *maior);

int main () {

  int num1, num2, *m;

  printf("digite o primeiro número: \n");
  scanf("%d", &num1);
  printf("digite o segundo número: \n");
  scanf("%d", &num2);

  printf("O  maior número é: %d", maiorNumero(num1, num2, m));

  return 0;

}

int maiorNumero(int a, int b, int *maior) {

  if (a > b) {

    maior = &a;
  
  } else {
      
     maior = &b;
  } 
  
  return *maior;
}

