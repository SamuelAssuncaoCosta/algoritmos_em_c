#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 20
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char origem[n] = {"Olá, mundo!"};
	char destino[n];
	
	printf("antes do strcpy: \n");
	puts(origem);
	puts(destino);
	
	strcpy (destino,origem);
	printf("depois do strcpy: \n");
	puts(origem);
	puts(destino);
	
	

return 0;
}



