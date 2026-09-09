#include <stdio.h>

/* Função que imprime o caractere 'c', 'n' vezes em uma mesma linha */
void rePETECaractere(int n, char c) {
    int i;
    
    for (i = 0; i < n; i++) {
        printf("%c", c);
    }
    
    printf("\n"); 
}

int main() {
    int n;
    char c;

    printf("Digite o caractere a ser impresso: ");
    scanf(" %c", &c); 
    

    printf("Digite quantas vezes deseja repeti-lo: ");
    scanf("%d", &n);

    printf("\nResultado:\n");
    rePETECaractere(n, c);

    return 0;
}
