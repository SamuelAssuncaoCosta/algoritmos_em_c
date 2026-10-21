#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p;
	
	p = (int *) calloc(5, sizeof(int));
	
	int i;
	for(i=0;i<5;i++){
		printf("endereco de p%d = %p  |  valor de p%d = %d\n", i, (p+1), i, *(p+1));
	}
	
return 0;
}



