/*Faça uma função que recebe 2 números inteiros e retorna o maior dos números*/
#include <stdio.h>

int maior(int n1, int n2){
    if(n1 > n2){
        return n1;
    } else {
        return n2;
    }
}

int main(){
    int n1, n2, m;

    printf("Digite dois numeros para ver qual eh o maior: ");
    scanf("%d %d", &n1, &n2);

    m = maior(n1, n2);

    printf("maior: %d\n", m);

    return 0;
}
