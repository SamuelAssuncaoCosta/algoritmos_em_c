#include <stdio.h>

int main(){
    float pe, pf;
    int cp;
    printf("Insira o valor: ");
    scanf("%f", &pe);
    printf("insira o codigo de pagamento: ");
    scanf("%d", &cp);

    if (cp == 1){
        pf = pe - (pe * 0.10);
        printf("valor final: %.1f", pf);
    } else if (cp == 2){
        pf = pe - (pe * 0.05);
        printf("valor final: %.1f", pf);
    } else if (cp == 3){
        printf("valor final: %.1f", pe);
    } else if (cp == 4){
        pf = pe + (pe * 0.10);
        printf("valor final: %.1f", pf);
    }
    return 0;
}
