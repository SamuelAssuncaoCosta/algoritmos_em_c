#include <stdio.h>
int main(){
	int x,y,r = 1, i=1;
	printf("insira o valor da base: ");
	scanf("%d", &x);
	printf("insira o valor do expoente: ");
	scanf("%d", &y);
	
	while (i<=y){
		r = r * x;
		i++;
	}
printf("%d^%d = %d", x,y,r);
return 0;
}


