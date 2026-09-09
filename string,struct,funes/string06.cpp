/* Escreva um programa em C que leia os nomes de cinco pessoas e mostre-os em
ordem alfabetica (usar matriz de string) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j;
    char nome[5][50]; // Matriz: 5 linhas (nomes) x 50 colunas (letras)
    char aux[50];     // Variavel para auxiliar na troca

    // 1. Leitura dos 5 nomes
    for(i = 0; i < 5; i++){
        printf("Digite seu primeiro nome: ");
        scanf("%s", nome[i]);
    }

    // 2. Ordenacao em ordem alfabetica (Bubble Sort)
    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 5; j++){
            // Se nome[i] for maior que nome[j], troca de posicao
            if(strcmp(nome[i], nome[j]) > 0){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }

    // 3. Exibicao dos nomes ordenados
    printf("\nNomes em ordem alfabetica:\n");
    for(i = 0; i < 5; i++){
        printf("%s\n", nome[i]);
    }

    system("pause");
    return 0;
}
