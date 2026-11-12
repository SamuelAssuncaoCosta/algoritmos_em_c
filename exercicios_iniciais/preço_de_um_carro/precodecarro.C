#include <stdio.h>
int main(){
	float pc, pf;
	printf("Valor do custo de fabrica: ");
	scanf("%f", &pc);
	
	if (pc<=12.000){
		pf =  (float) pc + (0.05 * pc);
		printf("Valor do consumidor %f", pf); 
	} else if (pc>12.000 && pc<25.000){
		pf = (float) pc + (0.25 * pc);
		printf("Valor do consumidor %f", pf);
	}else{
		pf = (float) pc + ( 0.35 * pc);
		printf("Valor do consumidor %f", pf);
	}

return 0;
}


