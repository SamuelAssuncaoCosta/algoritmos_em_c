/*Faça uma função que receba um caractere como parâmetro e retorne 1, caso seja uma
consoante e 0 em caso contrário.*/
#include <stdio.h>

int consoante(char c) {
    
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }

   
    if (c < 'a' || c > 'z') {
        return 0;
    }

    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 0;
    }

    
    return 1;
}

int main() {
    char a;
    int consoa;

    printf("insira um caractere: ");
    scanf(" %c", &a);

    consoa = consoante(a);

    printf("resultado: %d\n", consoa);

    return 0;
}
