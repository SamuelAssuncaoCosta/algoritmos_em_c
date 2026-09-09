#include <stdio.h>

int minha_strlen(char str[]) {
    int tamanho = 0;

    while (str[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

int main() {
    char texto[] = "Computacao";

    printf("--- Questao 12 ---\n");
    printf("Tamanho da string: %d\n", minha_strlen(texto));

    return 0;
}
