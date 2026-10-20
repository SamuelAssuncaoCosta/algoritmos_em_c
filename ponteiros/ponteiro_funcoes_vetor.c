#include <stdio.h>
int somarvetor (int vetor[], const int n){
	int soma = 0;
	int *ponteiro;
	int *const finalvetor = vetor + n;
	
	for(ponteiro = vetor; ponteiro < finalvetor; ++ponteiro){
		soma += *ponteiro;
	}
	return soma;
}

int main(){
	int somarvetor(int vetor[], const int n);
	int vetor[10] = {5,5,5,5,5,5,5,5,5,5};
	
	printf("a soma dos membros do vetor = %i", somarvetor(vetor, 10));

return 0;
}



