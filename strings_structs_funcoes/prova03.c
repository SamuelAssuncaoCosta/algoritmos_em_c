/* crie um programa em C que armazene em uma variável do tipo estrutura os dados( título, editora, preço) de 10 livros e
no final mostre qual o livro mais caro */
#include <stdio.h>
#include <string.h>

#define qntd 10 

struct livros {
    char titulo[999];
    char editora[999];
    float preco;
};

typedef struct livros livros;

int main() {
    livros vet_livros[qntd];
    int i;
    int pos_maior = 0;

    for (i = 0; i < qntd; i++) {
        printf("--- Livro %d ---\n", i + 1);

        printf("Insira o nome do livro: ");
        fgets(vet_livros[i].titulo, sizeof(vet_livros[i].titulo), stdin);
        vet_livros[i].titulo[strcspn(vet_livros[i].titulo, "\n")] = '\0'; 

        printf("Insira o nome da editora: ");
        fgets(vet_livros[i].editora, sizeof(vet_livros[i].editora), stdin);
        vet_livros[i].editora[strcspn(vet_livros[i].editora, "\n")] = '\0'; 

        printf("Insira o preco: ");
        scanf("%f", &vet_livros[i].preco);

        
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        // Verifica se o livro atual é o mais caro até agora
        if (vet_livros[i].preco > vet_livros[pos_maior].preco) {
            pos_maior = i;
        }
        printf("\n");
    }

    
    printf("=== LIVRO MAIS CARO ===\n");
    printf("Titulo: %s\n", vet_livros[pos_maior].titulo);
    printf("Editora: %s\n", vet_livros[pos_maior].editora);
    printf("Preco: R$ %.2f\n", vet_livros[pos_maior].preco);

    return 0;
}
