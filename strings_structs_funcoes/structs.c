#include <stdio.h>
#include <string.h>
#include <locale.h>

#define tam 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[tam];
};

typedef struct tipo_pessoa tipo_pessoa;
int main(){
setlocale(LC_ALL, "Portuguese");

tipo pessoa pes= {o, 0.0, "teste"};

printf("Início: \n");
printf("pes.idade : %d\n", pes.idade);
printf("pes.peso: %2.f\n", pes.peso);
printf("pes.nome: %s\n", pes.nome);

pes.idade = 10;
pes.peso = 99.99;
strcpy(pes.nome, "texto");

printf("\nalterando os campos via código: \n");
printf("pes.idade: %d\n", pes.idade);
printf("pes.peso: %.2f\n", pes.peso);
printf("pes.nome: %s\n", pes.nome);

printf("\ninsira um número inteiro: \n");
scanf("%d", &pes.idade);
printf("\ninsira um número real: \n");
scanf("%f", &pes.peso);
fflush(stdin);
printf("\ninsira uma palavra: \n");
scanf("%s", &pes.nome);

printf("\nAlterando com dados do usuário:\n");
printf("pes.idade: %d\n", pes.idade);
printf("pes.peso: %f\n", pes.peso;
printf("pes.nome: %s\n", pes.nome);


return 0;
}



