/*Faça um programa que lê uma quantidade de números inteiros não definida (a leitura deve
parar quando o valor lido for 0) e salva em um vetor. Por fim imprima o vetor resultante. O vetor deve ser 
alocado dinamicamente e seu tamanho deve ser duplicado sempre que não houver mais espaço disponível para salvar os valores. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacidade = 2,i=0; 
    int tamanho = 0;    
    int valor;
    int *vetor;

   
    vetor = (int *) malloc(capacidade * sizeof(int));
    
    printf("Digite os numeros inteiros (digite 0 para encerrar):\n");

    while (1) {
        printf("Numero: ");
        scanf("%d", &valor);

        // Encerra a leitura ao digitar 0
        if (valor == 0) {
            break;
        }

        
        if (tamanho == capacidade) {
            capacidade *= 2; 

            int *temp = (int *) realloc(vetor, capacidade * sizeof(int));
            vetor = temp;
            printf("--> Vetor cheio! Capacidade duplicada para: %d elementos\n", capacidade);
        }

    
        vetor[tamanho] = valor;
        tamanho++;
    }

    
    printf("\n--- Vetor Resultante (%d elementos lidos) ---\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    free(vetor);

    return 0;
}


