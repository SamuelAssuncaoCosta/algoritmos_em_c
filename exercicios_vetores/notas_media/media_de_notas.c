#include <stdio.h>
int main(){
	int i, cont_acima = 0;
	float n[30], med, soma=0;
	
	for(i=0;i<30;i++){
		printf("insira a nota: ");
		scanf("%f", &n[i]);
		soma += n[i];
	}
	med = soma/30;
	
	for(i=0;i<30;i++){
		if(n[i] > med){
			cont_acima++;
		}
	}
	printf("media: %f\n", med);
	printf("quantidade de notas acimda da media: %d\n", cont_acima);
	printf("notas acima da media:\n");
	for(i=0;i<30;i++){
		 if(n[i] > med){
		 	printf("%f", n[i]);
		 }
	}

return 0;
}


