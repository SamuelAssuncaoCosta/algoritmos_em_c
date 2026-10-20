#include <stdio.h>
int main(){
	int vetor[3] = {1,2,3};
	int *ponteiro = &vetor[2];
	
	printf("%d", *ponteiro);

return 0;
}



