/*crie um programa que receba uma palavra qualquer e mostre quantas letras "a" s ela tem*/
#include <stdio.h>
#include <string.h>

int main(){
    char palavra[999];
    int cont = 0; // Inicializado com 0
    int i, tamanho;

    printf("insira uma palavra: ");
    scanf("%s", palavra); // Correcao do especificador e do nome da variavel

    tamanho = strlen(palavra);

    // Correcao da condicao (i < tamanho) e remocao do ';' do final do for
    for(i = 0; i < tamanho; i++){
        // Correcao dos comparadores (==)
        if(palavra[i] == 'a' || palavra[i] == 'A'){
            cont++;
        }
    }

    // Correcao da virgula no printf
    printf("quantidade de a's: %d\n", cont);

    return 0;
}
