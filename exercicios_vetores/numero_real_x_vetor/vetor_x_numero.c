#include <stdio.h>

int main(){
    float s[20], a;
    int i;

    printf("Insira o valor da variavel A: ");
    scanf("%f", &a);

    for(i=0; i<20; i++){
        printf("Insira o valor de S: ", i);
        scanf("%f", &s[i]);
    }

    printf("\n--- Produto de A pelo vetor S ---\n");

    
    for(i=0; i<20; i++){
        printf("%.2f ", a * s[i]); 
    }

    printf("\n");
    return 0;
}
