#include <stdio.h>

void imprimeRepetido(int vet_int[], char vet_char[], int tam) {
    int i, j;
    
    for (i = 0; i < tam; i++) {
        // Imprime o caractere vet_char[i] a quantidade de vezes indicada por vet_int[i]
        for (j = 0; j < vet_int[i]; j++) {
            printf("%c", vet_char[i]);
        }
        printf("\n"); // Quebra de linha apos terminar cada caractere
    }
}

int main() {
    int inteiros[3] = {2, 4, 3};
    char caracteres[3] = {'A', 'B', 'C'};

    printf("--- Questao 9 ---\n");
    imprimeRepetido(inteiros, caracteres, 3);

    return 0;
}
