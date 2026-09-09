#include <stdio.h>
#include <stdlib.h>

#define tam 50

struct atleta {
    char nome[tam];
    char esporte[tam];
    int idade;
    float altura;
};

typedef struct atleta atleta;

int main() {
    atleta atletas[5];
    atleta aux; // Estrutura auxiliar para realizar a troca
    int i, j;

    // 1. Leitura dos dados dos 5 atletas
    for (i = 0; i < 5; i++) {
        printf("--- Atleta %d ---\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", atletas[i].nome);
        
        printf("Esporte: ");
        scanf("%s", atletas[i].esporte);
        
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        
        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
        
        printf("\n");
    }

    // 2. Ordenacao por idade (do mais velho para o mais novo)
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            // Se o atleta da esquerda for MAIS NOVO que o da direita, troca de posicao
            if (atletas[i].idade < atletas[j].idade) {
                aux = atletas[i];
                atletas[i] = atletas[j];
                atletas[j] = aux;
            }
        }
    }

    // 3. Exibicao dos atletas ordenados
    printf("================ ATLETAS (DO MAIS VELHO AO MAIS NOVO) ================\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s - Idade: %d anos | Esporte: %s | Altura: %.2fm\n", 
               i + 1, atletas[i].nome, atletas[i].idade, atletas[i].esporte, atletas[i].altura);
    }

    system("pause");
    return 0;
}
