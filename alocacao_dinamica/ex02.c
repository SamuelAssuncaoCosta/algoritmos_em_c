#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, m, i;
    int *vetor; 

    printf("Insira o valor de N (tamanho) e M (multiplicador): ");
    scanf("%d %d", &n, &m);

    
    vetor = (int *) malloc(n * sizeof(int));
    
    

    for (i = 0; i < n; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

   
   
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i] * m); 
    }
    printf("\n");

    
    free(vetor);

    return 0;
}
