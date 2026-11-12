#include <stdio.h>
#include <stdlib.h>


int main(){
	
	//paes= 0,15 empadas=2,50
     int paes;
     int empadas;
     float guardar;
     float arrecadado;
    
     
    	printf("Qntde de paes vendidos: ");
    	scanf("%d", &paes);
		printf("Qntde de empadas vendidas: ");
     	scanf("%d", &empadas);
    	
		
		arrecadado = paes * 0.15 + empadas * 2.50;
		
		printf("total arrecadado foi: %f\n",arrecadado);
		
		guardar = arrecadado * 0.15;
		
		printf("total para ser guardado: %f\n", guardar); 
		printf("Boa sorte a Padaria paezinhos\n");	
	   
	   	
	system("pause");
	return 0;
}
