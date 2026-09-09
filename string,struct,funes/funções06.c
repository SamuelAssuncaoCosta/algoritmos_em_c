#include <stdio.h>


int ehRegular(int n) {
   
    if (n <= 0) {
        return 0;
    }

    // Reduz o numero dividindo por 2 enquanto for divisivel
    while (n % 2 == 0) {
        n = n / 2;
    }

    // Reduz o numero dividindo por 3 enquanto for divisivel
    while (n % 3 == 0) {
        n = n / 3;
    }

    // Reduz o numero dividindo por 5 enquanto for divisivel
    while (n % 5 == 0) {
        n = n / 5;
    }

    // Se no final sobrou apenas 1, significa que ele so tinha fatores 2, 3 e/ou 5
    if (n == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    resultado = ehRegular(num);

    if (resultado == 1) {
        printf("O numero %d EH REGULAR (retorno: %d)\n", num, resultado);
    } else {
        printf("O numero %d NAO EH REGULAR (retorno: %d)\n", num, resultado);
    }

    return 0;
}
