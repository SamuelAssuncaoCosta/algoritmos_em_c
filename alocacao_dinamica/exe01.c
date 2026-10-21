#include <stdio.h>
#include <stdlib.h>

int main() {
    int T,i;
    float *vetor, soma = 0.0, media;

    
    printf("Digite o tamanho do vetor (T): ");
    scanf("%d", &T);

    
    vetor = (float *) malloc(T * sizeof(float));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    
    for (i = 0; i < T; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
        soma += vetor[i]; 
    }

    
    media = soma / T;

   
    printf("\nA media dos valores e: %.2f\n", media);

    
    free(vetor);

    return 0;
}
