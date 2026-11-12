#include <stdio.h>
#include <stdlib.h>

	int main(){
	
	//DERTERMINAR VARIÁVEIS:
	
		float Velocidade_media;
		float Distancia;
		float Tempo;
		
		printf("Digite a distancia percorrida: ");
		scanf("%f",&Distancia);
		printf("Digite o tempo gasto: ");
		scanf("%f", &Tempo);
		
		//OPERAÇÃO MATEMÁTICA:
		
		Velocidade_media = (float)Distancia/Tempo;
		
		printf("A velocidade Media em KM da situacao eh: %0.1f\n", Velocidade_media);



	system("pause");
	return 0;
}
