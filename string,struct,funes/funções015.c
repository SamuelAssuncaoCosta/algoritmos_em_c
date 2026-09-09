#include <stdio.h>

int minha_strcmp(char str1[], char str2[]) {
    int i = 0;

    // Avança enquanto os caracteres forem iguais e nao chegar ao fim das strings
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    // Retorna a diferenca entre os códigos ASCII dos caracteres onde houve a diferenca
    return (unsigned char)str1[i] - (unsigned char)str2[i];
}

int main() {
    char s1[] = "casa";
    char s2[] = "casa";
    char s3[] = "carro";

    printf("--- Questao 15 ---\n");
    printf("Comparando 'casa' e 'casa': %d\n", minha_strcmp(s1, s2)); // Retorna 0
    printf("Comparando 'casa' e 'carro': %d\n", minha_strcmp(s1, s3)); // Retorna valor > 0 ('s' > 'r')

    return 0;
}
