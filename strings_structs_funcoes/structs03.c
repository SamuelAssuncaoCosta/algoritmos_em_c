#include <stdio.h>
#include <stdlib.h>

// 1. Estrutura representando uma data
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Tabela com a quantidade de dias de cada mes (ano nao-bissexto)
int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Funcao para verificar se um ano eh bissexto
int ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Funcao que converte uma data completa para o total de dias desde o ano 0
long int dataParaDias(Data d) {
    long int totalDias = 0;
    int i;

    // Somar os dias de todos os anos anteriores
    for (i = 0; i < d.ano; i++) {
        if (ehBissexto(i)) {
            totalDias += 366;
        } else {
            totalDias += 365;
        }
    }

    // Somar os dias dos meses anteriores do ano atual
    for (i = 0; i < d.mes - 1; i++) {
        // Se for fevereiro em ano bissexto, soma 29 dias
        if (i == 1 && ehBissexto(d.ano)) {
            totalDias += 29;
        } else {
            totalDias += diasNoMes[i];
        }
    }

    // Somar os dias decorridos do mes atual
    totalDias += d.dia;

    return totalDias;
}

int main() {
    Data d1, d2;
    long int dias1, dias2, diferenca;

    printf("--- Leitura da Primeira Data ---\n");
    printf("Dia: ");
    scanf("%d", &d1.dia);
    printf("Mes: ");
    scanf("%d", &d1.mes);
    printf("Ano: ");
    scanf("%d", &d1.ano);

    printf("\n--- Leitura da Segunda Data ---\n");
    printf("Dia: ");
    scanf("%d", &d2.dia);
    printf("Mes: ");
    scanf("%d", &d2.mes);
    printf("Ano: ");
    scanf("%d", &d2.ano);

    // Converte ambas as datas para uma contagem absoluta de dias
    dias1 = dataParaDias(d1);
    dias2 = dataParaDias(d2);

    // Calcula a diferenca em valor absoluto (sempre positivo)
    if (dias1 > dias2) {
        diferenca = dias1 - dias2;
    } else {
        diferenca = dias2 - dias1;
    }

    printf("\n================ RESULTADO ================\n");
    printf("O numero de dias entre as duas datas eh: %ld dias\n", diferenca);

    system("pause");
    return 0;
}
