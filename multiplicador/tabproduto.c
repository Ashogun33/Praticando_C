#include <stdio.h>

void multipNum(void);

int main() {

  char repetir;

  printf("\t\t== Bem-vindo ao multiplicador de números ==\n\n");

    do {

       multipNum();

       printf("Deseja visualizar outra tabela? (S/N): ");
       scanf("%s", &repetir);
  
    } while (repetir == 'S' || repetir == 's');

    printf("\nObrigado por utilizar o multiplicador de números. Até mais!");
  
    return 0;
}

void multipNum(void) {
    
  int num;

  printf("Digite um número inteiro para obter sua tabela de multiplicação: ");
  scanf("%d", &num);

    for (int i = 1; i <= 10; ++i) {
      printf("%3d x %3d = %3d\n", num, i , num * i);
    } 
}
