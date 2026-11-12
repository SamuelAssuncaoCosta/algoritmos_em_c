#include <stdio.h>
int main(){
	float x,y;
	printf("Insira o valor de x: ");
	scanf("%f", &x);
	
	if (x<=1){
		printf("y=1");
	}else if (x>1 && x<=2){
		printf("y = 2");
	}else if ( x> 2 && x <=3){
		printf("y= x^2");
	}else if (x>3){
		printf("y= x^3");
	}
return 0;
}
