#include <stdio.h>
int main(){
	int vetor[3] = {1,2,3};
	
	int *ponteiro = &vetor[0];
	printf("%p", ponteiro);
	
	int *ponteiro = &vetor[1];
	printf("%p", ponteiro);
	
	int *ponteiro = &vetor[2];
	printf("%p", ponteiro);
	
	

return 0;
}


