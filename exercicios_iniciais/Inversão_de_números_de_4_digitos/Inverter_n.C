#include <stdio.h>
int main(){
	int num1, unidade, dezena, centena, milhar;
	
	printf("Insira o numero a ser invertido: ");
	scanf("%d", &num1);
	
	unidade = num1 % 10;
	dezena =(num1 / 10) % 10;
	centena = (num1/ 100) %10;
	milhar = num1 / 1000;
	
	printf("O numero eh: %d%d%d%d\n", unidade, dezena, centena, milhar);
	return 0;
}
