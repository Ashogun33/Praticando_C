#include <stdio.h>
#include <stdlib.h>

void menu(void);
float add_3notas();
float add_5notas(); 

float soma, media;


void menu(void) {

  int opcao = 0;

  printf("1. Calcular média com 3 notas.\n");
  printf("2. Calcular média com 5 notas.\n");
  printf("3. Sair\n");
  
  do {
  
    printf("\nEscolha sua opção: ");
  
    scanf("%d", &opcao);

    switch(opcao) {
      case 1:
      add_3notas();
      break;

      case 2:
      add_5notas();
      break;

      case 3:
      exit(0);

      default:
      printf("\n\nEscolha uma opção válida.\n"); 

    }
  } while (opcao!=1 && opcao!=2 && opcao!=3);
}

  float add_3notas() {
    
  float nota3[3];

    printf("Adicione a primeira nota: ");
    scanf("%f", &nota3[0]);

    while (nota3[0] < 0 || nota3[0] > 10) {
      printf("\nAdicione uma nota entre 0 e 10: ");
      scanf("%f", &nota3[0]);
    }

    printf("\nAdicione a segunda nota: ");
    scanf("%f", &nota3[1]);

    while (nota3[1] < 0 || nota3[1] > 10) {
      printf("\nAdicione uma nota entre 0 e 10: ");
      scanf("%f", &nota3[1]);
    }

    printf("\nAdicione a terceira nota: ");
    scanf("%f", &nota3[2]);

    while (nota3[2] < 0 || nota3[2] > 10) {
      printf("\nAdicione uma nota entre 0 e 10: ");
      scanf("%f", &nota3[2]);
    }
    
    int j;

    for (j = 0; j < 3; ++j) {
        soma += nota3[j]; 
    }

    return media = soma / 3;
  }
  

  float add_5notas() {
    
    float nota5[5];
    
    printf("Adicione a primeira nota: ");
    scanf("%f", &nota5[0]);

    while (nota5[0] < 0 || nota5[0] > 10) {
      printf("\nAdicione uma nota entre 0 e 10: ");
      scanf("%f", &nota5[0]);
    }

    printf("\nAdicione a segunda nota: ");
    scanf("%f", &nota5[1]);

    while (nota5[1] < 0 || nota5[1] > 10) {
      printf("\nAdicione uma nota entre 0 e 10: ");
      scanf("%f", &nota5[1]);
    }

    printf("\nAdicione a terceira nota: ");
    scanf("%f", &nota5[2]);

    while (nota5[2] < 0 || nota5[2] > 10) {
      printf("\nAdicione uma nota entre 0 e 10: ");
      scanf("%f", &nota5[2]);
    }
    
    printf("\nAdicione a quarta nota: ");
    scanf("%f", &nota5[3]);

    while (nota5[3] < 0 || nota5[3] > 10) {
      printf("\nAdicione uma nota entre 0 e 10: ");
      scanf("%f", &nota5[3]);
    }

    printf("\nAdicione a quinta nota: ");
    scanf("%f", &nota5[4]);

    while (nota5[4] < 0 || nota5[4] > 10) {
      printf("\nAdicione uma nota entre 0 e 10: ");
      scanf("%f", &nota5[4]);
    }
    
    int i;

    for (i = 0; i < 5; ++i) {
        soma += nota5[i]; 
    }

    return media = soma / 5;
    
  }

int main() {

  printf("\t\t== calculador de médias ==\n\n");

  menu();

  printf("\nEsta é a média: %.2f", media);
  return 0;
}

