#include <stdio.h>

int soma(int a, int b);

int main () {

  int num1, num2, resultado;

  printf("Digite o primeiro número: \n");
  scanf("%d", &num1);
  printf("Digite o segundo número: \n");
  scanf("%d", &num2);

  resultado = soma(num1, num2);

  printf("o resultado da soma é: %d", resultado);

  return 0;


}

int soma(int a, int b) {
  return a + b;
}
