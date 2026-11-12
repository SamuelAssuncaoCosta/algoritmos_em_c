#include <stdio.h>
int main(){
    int valor, cem, c, v, d, cinco, dois, um;
    
    printf("Insira o valor: ");
    scanf("%d", &valor);
    
    cem = valor / 100;
    c = (valor % 100) / 50;
    v = (valor % 50) / 20;
    d = (valor % 20) / 10;
    cinco = (valor % 10) / 5;
    dois = (valor % 5) / 2;
    um = valor % 5 % 2;
    
    if(cem > 0) printf("%d notas de 100.00\n", cem);
    if(c > 0) printf("%d notas de 50.00\n", c);
    if(v > 0) printf("%d notas de 20.00\n", v);
    if(d > 0) printf("%d notas de 10.00\n", d);
    if(cinco > 0) printf("%d notas de 5.00\n", cinco);
    if(dois > 0) printf("%d notas de 2.00\n", dois);
    if(um > 0) printf("%d notas de 1.00\n", um);
    
    return 0;
}
