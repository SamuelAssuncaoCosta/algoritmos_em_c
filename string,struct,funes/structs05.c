#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 40

// Estrutura heterogenea para armazenar os dados do aluno
typedef struct {
    char nome[100];
    int idade;
    float media;
} Aluno;

// Funcao auxiliar para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Aluno turma[MAX_ALUNOS];
    int qtd_cadastrados = 0;
    char opcao;
    int i, j;

    do {
        printf("\n================ MENU DE ALUNOS ================\n");
        printf("a. Armazenar os dados de um novo aluno\n");
        printf("b. Pesquisar dados por nome\n");
        printf("c. Pesquisar a media geral da turma\n");
        printf("d. Apresentar os 3 alunos com maior media\n");
        printf("e. Encerrar o programa\n");
        printf("================================================\n");
        printf("Escolha uma opcao: ");

        scanf(" %c", &opcao);
        limparBuffer();

        switch (opcao) {
            case 'a': case 'A': {
                if (qtd_cadastrados >= MAX_ALUNOS) {
                    printf("\n[ERRO] A turma ja atingiu o limite de %d alunos!\n", MAX_ALUNOS);
                } else {
                    printf("\n--- Cadastrar Aluno #%d ---\n", qtd_cadastrados + 1);
                    
                    printf("Nome: ");
                    fgets(turma[qtd_cadastrados].nome, sizeof(turma[qtd_cadastrados].nome), stdin);
                    // Remove o '\n' do final da string se capturado
                    turma[qtd_cadastrados].nome[strcspn(turma[qtd_cadastrados].nome, "\n")] = '\0';

                    printf("Idade: ");
                    scanf("%d", &turma[qtd_cadastrados].idade);

                    printf("Media Final: ");
                    scanf("%f", &turma[qtd_cadastrados].media);
                    limparBuffer();

                    qtd_cadastrados++;
                    printf("\nAluno cadastrado com sucesso!\n");
                }
                break;
            }

            case 'b': case 'B': {
                if (qtd_cadastrados == 0) {
                    printf("\nNenhum aluno cadastrado ate o momento.\n");
                } else {
                    char busca[100];
                    int encontrado = 0;

                    printf("\nDigite o nome do aluno para buscar: ");
                    fgets(busca, sizeof(busca), stdin);
                    busca[strcspn(busca, "\n")] = '\0';

                    for (i = 0; i < qtd_cadastrados; i++) {
                        // strcmp retorna 0 quando as strings sao iguais
                        if (strcmp(turma[i].nome, busca) == 0) {
                            printf("\n--- Dados do Aluno ---\n");
                            printf("Nome: %s\n", turma[i].nome);
                            printf("Idade: %d anos\n", turma[i].idade);
                            printf("Media Final: %.2f\n", turma[i].media);
                            encontrado = 1;
                            break;
                        }
                    }

                    if (!encontrado) {
                        printf("\nAluno \"%s\" nao foi encontrado.\n", busca);
                    }
                }
                break;
            }

            case 'c': case 'C': {
                if (qtd_cadastrados == 0) {
                    printf("\nNenhum aluno cadastrado para calcular a media geral.\n");
                } else {
                    float soma = 0.0;
                    for (i = 0; i < qtd_cadastrados; i++) {
                        soma += turma[i].media;
                    }
                    float media_geral = soma / qtd_cadastrados;
                    printf("\nMedia Geral da Turma (%d alunos): %.2f\n", qtd_cadastrados, media_geral);
                }
                break;
            }

            case 'd': case 'D': {
                if (qtd_cadastrados == 0) {
                    printf("\nNenhum aluno cadastrado ate o momento.\n");
                } else {
                    // Cria uma copia do vetor original para ordenacao preservando o cadastro
                    Aluno copia[MAX_ALUNOS];
                    Aluno temp;

                    for (i = 0; i < qtd_cadastrados; i++) {
                        copia[i] = turma[i];
                    }

                    // Ordena a copia por media (da maior para a menor) via Bubble Sort
                    for (i = 0; i < qtd_cadastrados - 1; i++) {
                        for (j = i + 1; j < qtd_cadastrados; j++) {
                            if (copia[i].media < copia[j].media) {
                                temp = copia[i];
                                copia[i] = copia[j];
                                copia[j] = temp;
                            }
                        }
                    }

                    // Exibe ate os 3 primeiros com maior media
                    int limite = (qtd_cadastrados < 3) ? qtd_cadastrados : 3;

                    printf("\n=== TOP %d ALUNOS COM MAIORES MEDIAS ===\n", limite);
                    for (i = 0; i < limite; i++) {
                        printf("%dº Lugar -> Nome: %s | Idade: %d anos | Media: %.2f\n", 
                               i + 1, copia[i].nome, copia[i].idade, copia[i].media);
                    }
                }
                break;
            }

            case 'e': case 'E':
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 'e' && opcao != 'E');

    return 0;
}
