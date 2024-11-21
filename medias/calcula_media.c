#include <stdio.h>
#include <stdlib.h>

void menu(void);
float calculaMedia(int quantidade);
float validarNota(void);

void menu(void) {
  int opcao = 0;

  do {

    printf("\n1. Calcular média com 3 notas.\n");
    printf("2. Calcular média com 5 notas.\n");
    printf("3. Sair\n");
    printf("\nEscolha sua opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
      case 1:
      printf("\nA média das 3 notas é: %.2f\n\n", calculaMedia(3));
      break;

      case 2:
      printf("\nA média das 5 notas é: %.2f\n\n", calculaMedia(5));
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
      printf("Digite a nota %d: ", i + 1);
      soma += validarNota();
    }
    return soma / quantidade;
  }

  float validarNota(void) {
    
  float nota;

  do {
    scanf("%f", &nota);
    if (nota < 0 || nota > 10) {
      printf("Nota inválida! Digite notas entre 0 e 10:\n");
    
    }
  } while (nota < 0 || nota > 10);

  return nota;
  }

int main() {
  int repetirEncerrar;

  printf("\t\t== calculador de médias ==\n\n");
  
  menu();

  do {
    printf("Para retonar ao menu de opções, digite 1.\n");
    printf("Para encerra o programa, digite 2.\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &repetirEncerrar);

    switch (repetirEncerrar) {

      case 1:
      menu();
      break;

      case 2:
      return 0;
    }
  } while(1);


  return 0;
}

