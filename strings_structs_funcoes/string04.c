#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char s1[21] = "";
    char s2[21] = "";
    char opcao;
    int i; // Declarada fora para ser compativel com C89

    do {
        printf("\n================ MENU ================\n");
        printf("a. Ler uma string S1 (max 20 caracteres)\n");
        printf("b. Imprimir o tamanho da string S1\n");
        printf("c. Comparar S1 com uma nova string S2\n");
        printf("d. Concatenar S1 com uma nova string S2\n");
        printf("e. Imprimir a string S1 de forma reversa\n");
        printf("f. Contar quantas vezes um caractere aparece em S1\n");
        printf("g. Substituir a primeira ocorrencia de C1 por C2 em S1\n");
        printf("h. Verificar se S2 eh substring de S1\n");
        printf("i. Retornar uma substring de S1\n");
        printf("s. Sair\n");
        printf("======================================\n");
        printf("Escolha uma opcao: ");
        
        scanf(" %c", &opcao);
        limparBuffer();

        switch (opcao) {
            case 'a': case 'A': {
                printf("Digite a string S1 (max 20 caracteres): ");
                fgets(s1, sizeof(s1), stdin);
                s1[strcspn(s1, "\n")] = '\0';
                printf("String S1 armazenada com sucesso!\n");
                break;
            }

            case 'b': case 'B': {
                printf("Tamanho da string S1: %lu caracteres\n", strlen(s1));
                break;
            }

            case 'c': case 'C': {
                printf("Digite a string S2 para comparacao: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';

                int res = strcmp(s1, s2);
                if (res == 0) {
                    printf("As strings S1 e S2 sao IGUAIS.\n");
                } else if (res < 0) {
                    printf("S1 eh MENOR que S2 alfabeticamente/ASCII.\n");
                } else {
                    printf("S1 eh MAIOR que S2 alfabeticamente/ASCII.\n");
                }
                break;
            }

            case 'd': case 'D': {
                char resultado[42]; 
                printf("Digite a string S2 para concatenar: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';

                strcpy(resultado, s1);
                strcat(resultado, s2);

                printf("Resultado da concatenacao (S1 + S2): %s\n", resultado);
                break;
            }

            case 'e': case 'E': {
                printf("S1 de forma reversa: ");
                int tam = strlen(s1);
                for (i = tam - 1; i >= 0; i--) {
                    printf("%c", s1[i]);
                }
                printf("\n");
                break;
            }

            case 'f': case 'F': {
                char busca;
                int contador = 0;

                printf("Informe o caractere a ser contado: ");
                scanf(" %c", &busca);
                limparBuffer();

                for (i = 0; s1[i] != '\0'; i++) {
                    if (s1[i] == busca) {
                        contador++;
                    }
                }
                printf("O caractere '%c' aparece %d vez(es) em S1.\n", busca, contador);
                break;
            }

            case 'g': case 'G': {
                char c1, c2;
                int trocou = 0;

                printf("Informe o caractere a ser substituido (C1): ");
                scanf(" %c", &c1);
                printf("Informe o novo caractere (C2): ");
                scanf(" %c", &c2);
                limparBuffer();

                for (i = 0; s1[i] != '\0'; i++) {
                    if (s1[i] == c1) {
                        s1[i] = c2;
                        trocou = 1;
                        break;
                    }
                }

                if (trocou) {
                    printf("String S1 apos a substituicao: %s\n", s1);
                } else {
                    printf("O caractere '%c' nao foi encontrado em S1.\n", c1);
                }
                break;
            }

            case 'h': case 'H': {
                printf("Digite a string S2 para buscar em S1: ");
                fgets(s2, sizeof(s2), stdin);
                s2[strcspn(s2, "\n")] = '\0';

                if (strstr(s1, s2) != NULL) {
                    printf("A string S2 (\"%s\") EH substring de S1.\n", s2);
                } else {
                    printf("A string S2 (\"%s\") NAO eh substring de S1.\n", s2);
                }
                break;
            }

            case 'i': case 'I': {
                int pos, tamSub, tamS1;
                
                printf("Informe a posicao inicial (indice 0 a %lu): ", strlen(s1));
                scanf("%d", &pos);
                printf("Informe o tamanho da substring: ");
                scanf("%d", &tamSub);
                limparBuffer();

                tamS1 = strlen(s1);

                if (pos < 0 || pos >= tamS1 || tamSub <= 0) {
                    printf("Posicao ou tamanho invalido!\n");
                } else {
                    char sub[21];
                    for (i = 0; i < tamSub && (pos + i) < tamS1; i++) {
                        sub[i] = s1[pos + i];
                    }
                    sub[i] = '\0';

                    printf("Substring gerada: %s\n", sub);
                }
                break;
            }

            case 's': case 'S':
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 's' && opcao != 'S');

    return 0;
}
