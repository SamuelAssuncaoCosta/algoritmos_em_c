#include <stdio.h>
int main(){
	float kwh,conta;
printf("Insira o consumo mensal: ");
scanf("%f", &kwh);

	if (kwh<0){
		printf("Consumo invalido");
	} else if (kwh <=100){
		conta = (float)0.50 * kwh;
		printf("Valor total da conta: %.2f", conta);
	}else if (kwh>=101 && kwh <=200){
		conta = (float)0.75 * kwh;
		printf("Valor total da conta: %.2f", conta);
	} else if (kwh>=201 && kwh <=500){
		conta = (float)1.20 * kwh;
		printf("Valor total da conta: %.2f", conta);
	} else if (kwh>500){
		conta = (float)1.50 * kwh;
		printf("Valor total da conta: %.2f", conta);
	
}

return 0;
}
