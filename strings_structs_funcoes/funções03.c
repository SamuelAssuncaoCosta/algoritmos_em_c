/*Faça uma função que recebe um número inteiro e retorna o fatorial desse número.*/
#include <stdio.h>

int fatorial(int n1){
    int resultado = 1;
    int i;

    
    for(i = n1; i >= 1; i--){
        resultado = resultado * i;
    }

    return resultado;
}

int main(){
    int n1, fat;

    printf("insira um numero para ter seu fatorial: ");
    scanf("%d", &n1);

    fat = fatorial(n1); 
    
    printf("fatorial: %d\n", fat);
    return 0;
}
