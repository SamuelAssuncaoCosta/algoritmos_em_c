#include <stdio.h>
#include <stdlib.h>

// Implementacao da funcao vetpares
int *vetpares(int *vet, int tam, int *tamn) {
    int qtd_pares = 0;
    int i, j = 0;

    // 1. Conta quantos elementos pares existem no vetor original
    for (i = 0; i < tam; i++) {
        if (vet[i] % 2 == 0) {
            qtd_pares++;
        }
    }

    // 2. Atualiza o parametro de saida tamn com a quantidade de pares
    *tamn = qtd_pares;

    // Se nao houver pares, retorna NULL
    if (qtd_pares == 0) {
        return NULL;
    }

    // 3. Aloca a memoria exatamente para a quantidade de pares encontrada
    int *novo_vet = (int *) malloc(qtd_pares * sizeof(int));
    if (novo_vet == NULL) {
        printf("Erro ao alocar memoria!\n");
        return NULL;
    }

    // 4. Copia os elementos pares para o novo vetor
    for (i = 0; i < tam; i++) {
        if (vet[i] % 2 == 0) {
            novo_vet[j] = vet[i];
            j++;
        }
    }

    return novo_vet;
}

int main() {
    int vet_original[] = {1, 4, 7, 8, 10, 13, 16};
    int tam_original = 7;
    int tam_novo = 0;
    int i;

    // Chamada da funcao vetpares
    int *pares = vetpares(vet_original, tam_original, &tam_novo);

    printf("Vetor original: ");
    for (i = 0; i < tam_original; i++) {
        printf("%d ", vet_original[i]);
    }

    printf("\n\nVetor de pares (%d elementos): ", tam_novo);
    if (pares != NULL) {
        for (i = 0; i < tam_novo; i++) {
            printf("%d ", pares[i]);
        }
        printf("\n");
        free(pares); // Libera a memoria alocada
    } else {
        printf("Nenhum elemento par encontrado.\n");
    }

    return 0;
}
