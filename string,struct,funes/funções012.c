#include <stdio.h>

void minha_strcpy(char destino[], char origem[]) {
    int i = 0;

    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    
    // Adiciona o terminador nulo ao final da string copiada
    destino[i] = '\0';
}

int main() {
    char origem[] = "Linguagem C";
    char destino[50];

    minha_strcpy(destino, origem);

    printf("--- Questao 13 ---\n");
    printf("String copiada: %s\n", destino);

    return 0;
}
