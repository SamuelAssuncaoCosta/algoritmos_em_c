#include <stdio.h>
int main(){
	int n1,n2,menor,maior;
	
printf("Insira o primeiro numero: ");
scanf("%d",&n1);
printf("Insira o segundo numero: ");
scanf("%d", &n2);

	if (n1 < n2){
		menor = n1;
	} else if (n2 < n1){
		menor = n2;
	}
	if (n1>n2){
		maior = n1;
	} else if(n2>n1){
		maior = n2;
	}

printf("Ordem crescente: %d, %d", menor, maior);
return 0;
}
