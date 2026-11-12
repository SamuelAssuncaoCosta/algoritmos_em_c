/* crie em c um programa que armazene em uma variavel do tipo estrutura os dados de 5 pessoas: nome, idade, endereço. ao final deve ser apresentado
dados das pessoas menores de idade*/
#include <stdio.h>
#include <string.h>

#define tam 5 

struct dados {
    char nome[100];
    int idade;
    char endereco[200];
};

typedef struct dados dados;

int main() {
    dados vet_dados[tam];
    int i;

    // Laço de leitura dos dados
    for(i = 0; i < tam; i++) {
        printf("--- Pessoa %d ---\n", i + 1);

        printf("Insira seu nome: ");
        fgets(vet_dados[i].nome, sizeof(vet_dados[i].nome), stdin);
        vet_dados[i].nome[strcspn(vet_dados[i].nome, "\n")] = '\0'; // Remove o '\n'

        printf("Insira sua idade: ");
        scanf("%d", &vet_dados[i].idade);

        // Limpeza do buffer do teclado apos o scanf
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Insira seu endereco: ");
        fgets(vet_dados[i].endereco, sizeof(vet_dados[i].endereco), stdin);
        vet_dados[i].endereco[strcspn(vet_dados[i].endereco, "\n")] = '\0'; // Remove o '\n'

        printf("\n");
    }

    printf("=== PESSOAS MENORES DE IDADE ===\n");
    // Laço de exibição dos menores de 18 anos
    for(i = 0; i < tam; i++) {
        if(vet_dados[i].idade < 18) {
            printf("Nome: %s\n", vet_dados[i].nome);
            printf("Idade: %d anos\n", vet_dados[i].idade);
            printf("Endereco: %s\n", vet_dados[i].endereco);
            printf("-----------------------------\n");
        }
    }

    return 0;
}
