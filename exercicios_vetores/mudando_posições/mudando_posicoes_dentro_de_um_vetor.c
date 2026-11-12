#include <stdio.h>

int main() {
    int v[20], i, aux;

   
    printf("Digite os 20 numeros:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
    }

    
    printf("Vetor original: ");
    for(i = 0; i < 20; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    
    for(i = 0; i < 10; i++) {
        
        aux = v[i];            
        v[i] = v[19 - i];        
        v[19 - i] = aux;         
    }

  
    printf("Vetor invertido: ");
    for(i = 0; i < 20; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
