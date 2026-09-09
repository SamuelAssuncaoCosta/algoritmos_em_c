#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char data[20];
    int dia, mes, ano;
    int valida = 1;
    int i;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%s", data);

    
    if (strlen(data) != 10) {
        valida = 0;
    } else {
        
        if (data[2] != '/' || data[5] != '/') {
            valida = 0;
        }

        
        for (i = 0; i < 10; i++) {
            if (i != 2 && i != 5) {
                if (data[i] < '0' || data[i] > '9') {
                    valida = 0;
                    break;
                }
            }
        }
    }

    
    if (valida) {
        
        dia = (data[0] - '0') * 10 + (data[1] - '0');

        
        mes = (data[3] - '0') * 10 + (data[4] - '0');

        
        ano = (data[6] - '0') * 1000 + 
              (data[7] - '0') * 100 + 
              (data[8] - '0') * 10 + 
              (data[9] - '0');

        printf("\n--- Data Valida! ---\n");
        printf("Dia: %d\n", dia);
        printf("Mes: %d\n", mes);
        printf("Ano: %d\n", ano);
    } else {
        printf("\nFormato de data invalido! Use o formato DD/MM/AAAA.\n");
    }


    return 0;
}
