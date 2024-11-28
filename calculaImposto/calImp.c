#include <stdio.h>

#define RENDA1 22000
#define RENDA2 50000
#define TAXA1 0.15
#define TAXA2 0.275

int main() {  // programa inicial
  
  float impostoPagar, renda, rendaLiq;
  
  printf("\t\t== Calculador de Imposto a pagar ==\n\n");
  
    printf("\nPor valor, digite o valor da sua renda: R$ ");
  scanf("%f", &renda);

    if (renda < RENDA1) {
     
      impostoPagar = 0;
      printf("\nVocê é isento.\n");
    
  } else if (renda >= RENDA1 && renda <= RENDA2) {
     
      impostoPagar = renda * TAXA1;
      printf("\nSua taxa de imposto é de 15 por cento.\n");
  
  } else {
      
      impostoPagar = renda * TAXA2;
      printf("\nsua taxa de imposto é de 27.5 por cento.\n");
  }
  
      rendaLiq = renda - impostoPagar;
  
      printf("\nSeu imposto da pagar é: %.2f\n", impostoPagar);
      printf("\nsua renda é: %.2f\n", renda);
      printf("\nSua renda Liquida é: %.2f\n", rendaLiq);

   return 0;
}
