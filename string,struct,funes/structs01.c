/* Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados
de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 50

struct atleta {
    char nome[tam];
    char esporte[tam];
    int idade;
    float altura;
};

typedef struct atleta atleta;

int main() {
    atleta atletas[5]; 
    int i;
    
    
    int i_mais_alto = 0;
    int i_mais_velho = 0;

    
    for (i = 0; i < 5; i++) {
        printf("--- Atleta %d ---\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", atletas[i].nome);
        
        printf("Esporte: ");
        scanf("%s", atletas[i].esporte);
        
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        
        printf("Altura (em metros): ");
        scanf("%f", &atletas[i].altura);
        
        printf("\n");
    }

    
    for (i = 1; i < 5; i++) {
    
        if (atletas[i].altura > atletas[i_mais_alto].altura) {
            i_mais_alto = i;
        }
        
       
        if (atletas[i].idade > atletas[i_mais_velho].idade) {
            i_mais_velho = i;
        }
    }

    
    printf("================ RESULTADOS ================\n");
    printf("Atleta mais alto: %s (%.2fm)\n", atletas[i_mais_alto].nome, atletas[i_mais_alto].altura);
    printf("Atleta mais velho: %s (%d anos)\n", atletas[i_mais_velho].nome, atletas[i_mais_velho].idade);

    system("pause");
    return 0;
}
