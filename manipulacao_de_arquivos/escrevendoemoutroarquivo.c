#include <stdio.h>
#include <stdlib.h> 


void copiarconteudo(FILE *file1, FILE *file2);

int main() {
    FILE *file1, *file2;

    file1 = fopen("teste1.txt", "r");

    
    if (file1 == NULL) {
        printf("Arquivo nao encontrado!\n");
        getchar();
        exit(1);
    }

    file2 = fopen("teste2.txt", "w");

    
    copiarconteudo(file1, file2);

    fclose(file1);
    fclose(file2);

    printf("Arquivo copiado com sucesso!\n");

    return 0;
}


void copiarconteudo(FILE *file1, FILE *file2) {
    char leitor[1000];

    
    while (fgets(leitor, sizeof(leitor), file1) != NULL) {
        fputs(leitor, file2); 
    }
}
