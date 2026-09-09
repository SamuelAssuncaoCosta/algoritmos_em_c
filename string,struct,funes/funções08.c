#include <stdio.h>

/* Função que verifica se um numero inteiro eh capicua (palindromo).
   Retorna 1 se for capicua, ou 0 caso contrario. */
int ehCapicua(int n) {
    int original = n;
    int invertido = 0;
    int ultimoDigito;

    // Numeros negativos geralmente nao sao considerados capicuas por causa do sinal '-'
    if (n < 0) {
        return 0;
    }

    // Inverte o numero matematicamente
    while (n > 0) {
        ultimoDigito = n % 10;                     // Pega o ultimo digito
        invertido = (invertido * 10) + ultimoDigito; // Adiciona o digito ao numero invertido
        n = n / 10;                                // Remove o ultimo digito do numero
    }

    // Compara o numero invertido com o original
    if (invertido == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resultado = ehCapicua(num);

    if (resultado == 1) {
        printf("O numero %d EH CAPICUA (retorno: %d)\n", num, resultado);
    } else {
        printf("O numero %d NAO EH CAPICUA (retorno: %d)\n", num, resultado);
    }

    return 0;
}
