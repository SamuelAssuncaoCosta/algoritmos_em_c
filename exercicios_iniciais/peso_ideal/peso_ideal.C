#include <stdio.h>
#include <string.h>

int main(){
	float pesoideal, altura;
	char sexo[50], masculino[50], feminino[50];
	
printf("Insira seu sexo: ");
scanf("%s", &sexo);
printf("Insira sua altura: ");
scanf("%f", &altura);

	if(strcmp(sexo, "masculino") == 0){
		pesoideal = (72.7 * altura) - 58;
		printf("seu peso ideal eh: %.2f", pesoideal);
	}else if (strcmp(sexo, "feminino") ==0){
		pesoideal = (62.1 * altura) - 44.7;
		printf("Seu peso ideal eh: %.2f", pesoideal);
	}
	return 0;
}
