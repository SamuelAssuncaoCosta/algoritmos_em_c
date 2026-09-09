/* Escreva um programa em C que verifique se uma palavra e um palindromo. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[100];
    int inicio = 0;
    int fim;
    int ehPalindromo = 1; 

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    
    fim = strlen(palavra) - 1;

    
    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            ehPalindromo = 0; 
            break;
        }
        inicio++;
        fim--;
    }

    if (ehPalindromo) {
        printf("A palavra eh um palindromo!\n");
    } else {
        printf("A palavra NAO eh um palindromo!\n");
    }

    system("pause");
    return 0;
}
