#include <stdio.h>


int fibonacci(int n) {
    int f0 = 0, f1 = 1, proximo;
    int i;

    
    if (n == 0) return f0;
    if (n == 1) return f1;

    
    for (i = 2; i <= n; i++) {
        proximo = f0 + f1;
        f0 = f1;          
        f1 = proximo;        }

    return f1;
}

int main() {
    int n, termo;

    printf("Digite a posicao (n) da sequencia de Fibonacci: ");
    scanf("%d", &n);

    termo = fibonacci(n);

    printf("O %d-esimo termo da sequencia de Fibonacci eh: %d\n", n, termo);

    return 0;
}
