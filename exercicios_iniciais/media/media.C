#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[50];
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	printf("Digite seu nome: ");
	fgets(nome,50, stdin);
	printf("\nDigite sua primera nota: ");
	scanf("%f", &nota1);
	printf("\nDigite sua segunda nota: ");
	scanf("%f", &nota2);
	printf("\nDigite sua terceira nota: ");
	scanf("%f", &nota3);
		
	media = (float) (nota1 + nota2 + nota3)/3;
	
	printf("%s,Sua media foi %.3f\n", nome,media);
	
	system("pause");
	return 0;
}
