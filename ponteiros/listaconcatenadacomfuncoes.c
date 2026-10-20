#include <stdio.h>

struct lista {
    int valor;
    struct lista *proximo;
};

/* Função de busca */
struct lista *procurarvalor(struct lista *plista, int valor) {
    while (plista != NULL) { // Em C moderno, usamos NULL para ponteiros nulos
        if (plista->valor == valor) {
            return plista; // Encontrou! Retorna o ponteiro do nó atual
        }
        plista = plista->proximo; // Avança para o próximo nó
    }
    
    return NULL; // Se saiu do while, percorreu a lista inteira e não achou
}

int main() {
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;
    int valor;
    
    // Inicialização dos valores
    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;
    
    // Encadeamento dos nós
    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = NULL;
    
    printf("Digite o valor da pesquisa: ");
    scanf("%d", &valor);
    
    resultado = procurarvalor(gancho, valor);
    
    if (resultado == NULL) {
        printf("Valor nao encontrado!\n");
    } else {
        printf("Valor encontrado no endereco %p com o dado: %d\n", (void*)resultado, resultado->valor);
    }

    return 0;
}
