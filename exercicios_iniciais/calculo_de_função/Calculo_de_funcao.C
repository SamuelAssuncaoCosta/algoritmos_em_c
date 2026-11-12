#include <stdio.h>
#include <stdlib.h>
int main(){
	int A;
	int B;
	int C;
	int R;
	int S;
	float D;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	printf("Digite o valor de C: ");
	scanf("%d", &C);
	
	R = (A + B) * (A + B) ;
	S= (B + C) * (B + C);
	D = (float)(R+S) / 2;
	
	printf("O valor de D eh: %f\n", D);
	
	system("pause");
	return 0;
} 
