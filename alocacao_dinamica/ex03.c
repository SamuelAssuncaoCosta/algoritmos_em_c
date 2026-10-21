/* Faça um programa que lê um inteiro T e em seguida cria e lê um vetor de inteiros A de
tamanho T. O programa deve criar um novo vetor, B, que contém os elementos de A na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, i;
    int *a, *b;

    printf("Insira o valor de T (tamanho): ");
    scanf("%d", &t);

    // Alocação dos vetores A e B
    a = (int *) malloc(t * sizeof(int));
    b = (int *) malloc(t * sizeof(int));

    
   
    for (i = 0; i < t; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < t; i++) {
        b[t - 1 - i] = a[i];
    }

    
    printf("\nVetor B (A na ordem inversa):\n");
    for (i = 0; i < t; i++) {
        printf("B[%d] = %d\n", i, b[i]);
    }

    
    free(a);
    free(b);

    return 0;
}
