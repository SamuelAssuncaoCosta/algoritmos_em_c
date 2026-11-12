#include <stdio.h>

void minha_strcat(char destino[], char origem[]) {
    int i = 0;
    int j = 0;

    // 1. Encontra o final da primeira string
    while (destino[i] != '\0') {
        i++;
    }

    // 2. Copia os caracteres de origem para o final de destino
    while (origem[j] != '\0') {
        destino[i] = origem[j];
        i++;
        j++;
    }

    // 3. Adiciona o terminador nulo ao final
    destino[i] = '\0';
}

int main() {
    char str1[50] = "Ola ";
    char str2[] = "Mundo!";

    minha_strcat(str1, str2);

    printf("--- Questao 14 ---\n");
    printf("Resultado: %s\n", str1); // Imprime "Ola Mundo!"

    return 0;
}
