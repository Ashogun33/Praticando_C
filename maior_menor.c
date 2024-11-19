#include <stdio.h>

int main() {

  int num[5], maior, menor;
  float media, soma;

  media = soma = 0;

  printf("\t\t===== Digite 5 números inteiros entre 0 e 100 =====\n\n\n");

  printf("digite os números: \n\n");
  scanf("%d\n %d\n %d\n %d\n %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    while ((num[0] < 0 || num[0] > 100) || (num[1] < 0 || num[1] > 100) || (num[2] < 0 || num[2] > 100) || (num[3] < 0 || num[3] > 100) || (num[4] < 0 || num[4] > 100)) {
      printf("\nDigite 5 números inteiros entre 0 e 100\n");
      scanf("%d\n %d\n %d\n %d\n %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    }

  printf("\n%d, %d, %d, %d e %d", num[0], num[1], num[2], num[3], num[4]);

  soma = (num[0] + num[1] + num[2] + num[3] + num[4]);
  media = soma / 5;

  printf("\nA soma é: %.2f", soma);
    
  printf("\nA média é: %.2f", media);

  maior = menor = num[0];

  for (int i = 1; i < 5; ++i) {
    if (num[i] > maior ) { maior = num[i];
  } 
    
    if (num[i] < menor ) { menor = num[i];
  }

  }
  printf("\nO maior é %d e o menor é %d", maior, menor);
  
  return 0;

}
