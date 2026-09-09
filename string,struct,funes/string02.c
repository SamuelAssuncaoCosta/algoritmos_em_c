/* Escreva um programa em C que leia uma placa de um veículo (letras e números e 
informe o mês de pagamento do IPVA de acordo com o último número da placa */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char placa[8];

    printf("Insira a placa do seu veiculo: ");
    scanf("%s", placa);

    int ultimo = strlen(placa) - 1; 

    if (placa[ultimo] == '1' || placa[ultimo] == '2') {
        printf("mes de pagamento: fevereiro\n");
    } else if (placa[ultimo] == '3' || placa[ultimo] == '4') {
        printf("mes de pagamento: marco\n");
    } else if (placa[ultimo] == '5' || placa[ultimo] == '6') {
        printf("mes de pagamento: abril\n");
    } else if (placa[ultimo] == '7' || placa[ultimo] == '8') {
        printf("mes de pagamento: maio\n");
    } else if (placa[ultimo] == '9' || placa[ultimo] == '0') {
        printf("mes de pagamento: junho\n");
    } else {
        printf("Placa invalida ou sem numero no final.\n");
    }

    system("pause");
    return 0;
}
