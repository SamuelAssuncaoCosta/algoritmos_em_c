#include <stdio.h>
int main(){
	int x =10;
	double y = 20.50;
	char z = 'a';
	
	int *px = &x;
	double *py = &y;
	char *pz = &z;
	
	double soma = *px + *py;
	
	printf("soma: %f\n", soma );
	
	printf("endereco x : %d  valor de x: %d\n", px, *px);
	printf("endereco y : %d  valor de y: %f\n", py, *py);
	
	printf("endereco z : %d  valor de z: %c", pz, *pz);
	

return 0;
}



