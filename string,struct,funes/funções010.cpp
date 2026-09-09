#include <stdio.h>

void inverte(int vet[], int tam) {
    int i, temp;

    for (i = 0; i < tam / 2; i++) {
        // Troca de valores usando uma variavel temporaria
        temp = vet[i];
        vet[i] = vet[tam - 1 - i];
        vet[tam - 1 - i] = temp;
    }
}

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    int i;

    inverte(vet, 5);

    printf("--- Questao 10 ---\n");
    printf("Vetor invertido: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
