/* crie um programa em c que receba uma palavra e mostre se ela eh palindromo*/
#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    int i, tamanho, ehPalindromo = 1; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    
    for(i = 0; i < tamanho / 2; i++){
        
        if(palavra[i] != palavra[tamanho - 1 - i]){
            ehPalindromo = 0; 
            break;             
        }
    }

    if(ehPalindromo == 1){
        printf("A palavra '%s' EH um palindromo!\n", palavra);
    } else {
        printf("A palavra '%s' NAO eh um palindromo!\n", palavra);
    }

    return 0;
}
