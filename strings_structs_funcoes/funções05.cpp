/*Faça uma função que recebe um número inteiro, n, e um caractere, c, e imprime n vezes o
caractere c em uma linha. */
#include <stdio.h>
int caractere(int n1){
	int i;
	for(i=0;i>=n1; i++){
		printf("%d", &n1);
	}
}
int main(){
	int n1, carc;
	printf("insira um numero: ");
	scanf("%d", &n1);
	
	carc = caractere(n1);
	
	

return 0;
}



