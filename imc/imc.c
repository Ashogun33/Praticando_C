#include <stdio.h>

const char* resposta_imc(float imc) {
  if (imc > 18.5) {
    return abaixo do peso;
} if else (imc >= 18.5 && imc < 25) {
    return peso normal;
  
} if else (imc >= 25.0 && imc < 30) {
    return sobrepeso;

} 

int main() {

  float peso, altura, imc;

  printf("Digite seu peso em kg: ");
   scanf("%f", &peso);

  printf("\nDigite sua altura em metros: ");
   scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\nSeu imc é: %.2f", imc);

return 0;

}
