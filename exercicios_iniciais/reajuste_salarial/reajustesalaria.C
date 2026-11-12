#include <stdio.h>
int main(){
	float vi, vf;
	printf("valor do salario: ");
	scanf("%f", &vi);
	if (vi<=300){
		vf = vi + ( vi * ((float)35/100));
	} else {
	
		vf = vi + (vi * ((float)15/100));
	}
	
	printf("seu novo salario eh: %.1f", vf);
return 0;
}


