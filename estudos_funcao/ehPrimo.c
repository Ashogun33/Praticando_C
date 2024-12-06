#include <stdio.h>
#include <math.h>

int ehPrimo(int n);

int main() {
    int num, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    resultado = ehPrimo(num);

    if (resultado == 1) {
        printf("\nO número %d é primo.\n", num);
    } else {
        printf("\nO número %d não é primo.\n", num);
    }

    return 0;
}

int ehPrimo(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
