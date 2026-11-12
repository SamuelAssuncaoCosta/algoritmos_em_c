#include <stdio.h>
int main(){
	float largura, profundidade, potencia, m2;
	
	printf("Insira a largura em m: ");
	scanf("%f", &largura);
	printf("Insira a profundidade em m: ");
	scanf("%f", &profundidade);
	
	m2 = largura * profundidade;
	potencia = m2 * 18;
	
	printf("A potencia da lamdapa a ser usada eh: %.01f", potencia );
	
	return 0;	
	
} 
