#include <stdio.h>

int main() {

  float nota[4], soma,  media;
  soma = media = 0;

  printf("\t\t\t========== Cálculo das médias ==========\n\n\n");

  printf("Adicione a primeira nota: ");
  scanf("%f", &nota[0]);
  
  printf("Adicione a segunda nota:  ");
  scanf("%f", &nota[1]);        

  printf("Adicione a terceira nota: ");
  scanf("%f", &nota[2]);

  printf("Adicione a quarta nota: ");
  scanf("%f", &nota[3]);

  printf("As notas foram: %.2f, %.2f, %.2f, %.2f.\n", nota[0], nota[1], nota[2], nota[3]);

  int i = 0;

  for (i = 0; i < 4; i++) {
    soma += nota[i];
  
  }

  media = soma / 4;

  printf("A média é: %.2f.\n", media);

  return 0;

}
