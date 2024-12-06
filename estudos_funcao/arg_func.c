#include <stdio.h>

int media(int arr[], int tamanho);

int main() {

  int *arr;
  int num1 = 0, num2 = 0;

  float resultado=0;

  printf("\t\t== calcula Média dos elementos do Array ==\n\n");

  resultado = media(arr, num2);

  printf("O resultado é: %.2f", resultado);

  return 0;

}

int media(int arr[], int tamanho) {

  int num2 = 0;

  printf("Digite o tamanho do array: ");
  scanf("%d", &num2);
  
  int soma = 0;

  for(int i = 0; i <= num2 - 1; ++i) {
    printf("\nDigite o número %d: ", i + 1);
      scanf("%d", &arr[i]);
        soma = soma + arr[i];
  }
  return soma/num2;
}

