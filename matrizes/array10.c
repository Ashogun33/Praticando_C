#include <stdio.h>

int main() {

  int num[10], j, k, opcao;
  
  
  printf("Adicione 10 números inteiros:\n"); // ler os números
     
    for (int i = 0; i < 10; ++i) {
      scanf("%d", &num[i]);
    }
  
  printf("\nEm que ordem deseja imprimir os números?\n"); // menu iterativo de ordem de impressão
  printf("\nPara ordem original digite 1.\n");
  printf("Para ordem inversa digite 2.\n");
  printf("\nDigite sua opção: ");
  scanf("%d", &opcao);

      if (opcao == 1) { // imprime ordem original
           printf("\nOrdem original: ");
           for (j = 0; j < 10; ++j)
             if (j == 9) {
               printf("%d.", num[j]);
           
            } else {
               printf("%d, ", num[j]);
          }

    } else if (opcao == 2) {  // imprime ordem inversa
            printf("\nOrdem inversa: ");
            for (k = 9; k >= 0; k--)
              if (k == 0) {
                printf("%d.", num[k]);
          
            } else {
               printf("%d, ", num[k]);
          }
    }
  return 0;
}
