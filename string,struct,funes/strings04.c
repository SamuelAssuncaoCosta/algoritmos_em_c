#include <stdio.h>
#include <stdlib.h>

#define QTD 37

// 1. Estrutura para os dados do associado
typedef struct {
    char nome[100];
    int dia_nasc;
    int mes_nasc;
    int ano_nasc;
    float mensalidade;
    int dependentes;
} Associado;

int main() {
    Associado clube[QTD];
    int i;
    int maior_dep = 0;

    // 2. Leitura dos dados dos associados
    printf("=== CADASTRO DE ASSOCIADOS DOS CLUBES ===\n\n");
    for (i = 0; i < QTD; i++) {
        printf("--- Associado %d ---\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]", clube[i].nome); // Le a linha com espacos ate pressionar Enter
        
        printf("Data de Nascimento (DD MM AAAA): ");
        scanf("%d %d %d", &clube[i].dia_nasc, &clube[i].mes_nasc, &clube[i].ano_nasc);
        
        printf("Valor da mensalidade (R$): ");
        scanf("%f", &clube[i].mensalidade);
        
        printf("Quantidade de dependentes: ");
        scanf("%d", &clube[i].dependentes);
        
        // Atualiza a maior quantidade de dependentes encontrada
        if (i == 0 || clube[i].dependentes > maior_dep) {
            maior_dep = clube[i].dependentes;
        }
        
        printf("\n");
    }

    // 3. Impressao de todos os associados cadastrados
    printf("\n================ RELATORIO DE ASSOCIADOS ================\n");
    for (i = 0; i < QTD; i++) {
        printf("ID: %d | Nome: %s\n", i + 1, clube[i].nome);
        printf("Nascimento: %02d/%02d/%d\n", clube[i].dia_nasc, clube[i].mes_nasc, clube[i].ano_nasc);
        printf("Mensalidade: R$ %.2f\n", clube[i].mensalidade);
        printf("Dependentes: %d\n", clube[i].dependentes);
        printf("--------------------------------------------------------\n");
    }

    // 4. Impressao do(s) associado(s) com o maior numero de dependentes
    printf("\n============== MAIOR NUMERO DE DEPENDENTES (%d) ==============\n", maior_dep);
    for (i = 0; i < QTD; i++) {
        if (clube[i].dependentes == maior_dep) {
            printf("- %s (%d dependentes)\n", clube[i].nome, clube[i].dependentes);
        }
    }

    system("pause");
    return 0;
}
