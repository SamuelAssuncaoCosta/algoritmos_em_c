#include <stdio.h>

int main() {
    float v1[10], v2[10], v3[10]; 
    int i;

    
    printf("Digite os 10 valores do primeiro vetor:\n");
    for(i = 0; i < 10; i++){
        scanf("%f", &v1[i]);
    }

   
    printf("Digite os 10 valores do segundo vetor:\n");
    for(i = 0; i < 10; i++){
        scanf("%f", &v2[i]);
    }

 
    for(i = 0; i < 10; i++){
        v3[i] = v1[i] * v2[i];
    }

    
    printf("\nVetor resultante da multiplicacao:\n");
    for(i = 0; i < 10; i++){
        printf("%.2f ", v3[i]); 
    }

    return 0;
}
