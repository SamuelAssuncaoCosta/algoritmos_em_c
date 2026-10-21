#include <stdio.h>
#include <stdlib.h>

// Implementacao da funcao intersecao
void intersecao(int *vet1, int tam1, int *vet2, int tam2, int **novo, int *tamn) {
    int i, j, k;
    int qtd_intersec = 0;

    // 1. Conta quantos elementos de vet1 tambem estao em vet2
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            if (vet1[i] == vet2[j]) {
                qtd_intersec++;
                break; // Evita contar duplicados se houver repeticao no vet2
            }
        }
    }

    // 2. Atualiza o parametro de quantidade de elementos
    *tamn = qtd_intersec;

    // Se nao houver intersecao, altera o ponteiro para NULL
    if (qtd_intersec == 0) {
        *novo = NULL;
        return;
    }

    // 3. Aloca memoria para o novo vetor retornado atraves de *novo
    *novo = (int *) malloc(qtd_intersec * sizeof(int));
    if (*novo == NULL) {
        printf("Erro ao alocar memoria!\n");
        return;
    }

    // 4. Preenche o novo vetor com os elementos da intersecao
    k = 0;
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            if (vet1[i] == vet2[j]) {
                (*novo)[k] = vet1[i];
                k++;
                break;
            }
        }
    }
}

int main() {
    int vet1[] = {1, 3, 5, 7, 9, 11};
    int tam1 = 6;

    int vet2[] = {2, 3, 6, 7, 10, 11};
    int tam2 = 6;

    int *vet_intersecao = NULL;
    int tam_intersecao = 0;
    int i;

    // Passamos &vet_intersecao (int**) para alterar o ponteiro original dentro da funcao
    intersecao(vet1, tam1, vet2, tam2, &vet_intersecao, &tam_intersecao);

    printf("Vetor 1: ");
    for (i = 0; i < tam1; i++) printf("%d ", vet1[i]);

    printf("\nVetor 2: ");
    for (i = 0; i < tam2; i++) printf("%d ", vet2[i]);

    printf("\n\nIntersecao (%d elementos): ", tam_intersecao);
    if (vet_intersecao != NULL) {
        for (i = 0; i < tam_intersecao; i++) {
            printf("%d ", vet_intersecao[i]);
        }
        printf("\n");
        free(vet_intersecao); // Libera a memoria alocada
    } else {
        printf("Nenhum elemento em comum encontrado.\n");
    }

    return 0;
}
