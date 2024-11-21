#include <stdio.h>
#include <stdlib.h>

void menu(void);
float calculaMedia(int quantidade);
float validarNota();

void menu(void) {
  int opcao = 0;

  do {

    printf("\n1. Calcular média com 3 notas.\n");
    printf("2. Calcular média com 5 notas.\n");
    printf("3. Sair\n");
    printf("Escolha sua opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
      case 1:
      calculaMedia(3);
      break;

      case 2:
      calculaMedia(5);
      break;

      case 3:
      exit(0);

      default:
      printf("\n\nEscolha uma opção válida.\n"); 

    }
  } while (opcao!=1 && opcao!=2 && opcao!=3);
}

  float calculaMedia(int quantidade) {
    
    float soma = 0;

    for (int i =0; i < quantidade; ++i) {
      printf("Adicione a nota %d: ", i + 1);
      soma += validarNota();
    }
    return soma / quantidade;
  }

int main() {

  printf("\t\t== calculador de médias ==\n\n");

  menu();

  printf("\nEsta é a média: %.2f", media);
  return 0;
}

