#include <stdio.h>

/* Faça uma função que recebe as notas de três provas e retorna a média. */

float media(float n1, float n2, float n3) {
    float resultado;
    resultado = (n1 + n2 + n3) / 3.0;
    return resultado;
}

int main() {
    float n1, n2, n3, med;

    printf("Insira a 1a nota: ");
    scanf("%f", &n1);

    printf("Insira a 2a nota: ");
    scanf("%f", &n2);

    printf("Insira a 3a nota: ");
    scanf("%f", &n3);

    med = media(n1, n2, n3);

    printf("Sua media eh: %.2f\n", med);

    return 0;
}
