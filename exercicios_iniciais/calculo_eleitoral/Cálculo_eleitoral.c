#include <stdio.h>
#include <stdlib.h>

int main(){
	int eleitores; 
	int nulos;     
	int brancos;
	int validos;
	float percentual_nulo;  
	float percentual_valido;
	float percentual_branco;
	
	printf("Qual o total de eleitores do municipio: ");
	scanf("%d", &eleitores);
	printf("Quantidade de eleitores que votaram nulo: ");
	scanf("%d", &nulos);
	printf("Quantidade eleitores que votaram em branco: ");
	scanf("%d", &brancos);
	printf("Quantidade de eleitores que votaram valido: ");
	scanf("%d", &validos);
	percentual_nulo = (float)nulos/eleitores * 100;
	percentual_valido = (float)validos/eleitores * 100; 
	percentual_branco = (float)brancos/eleitores * 100;
	
	
	printf("\npercentual de eleitores nulo: %f", percentual_nulo);  
	printf("\npercentual de eleitores validos: %f", percentual_valido);
	printf("\npercentual de eleitores que votaram em branco: %f\n", percentual_branco);
	
	
	system("pause");
	return 0;
}
