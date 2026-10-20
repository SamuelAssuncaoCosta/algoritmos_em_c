#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *file;
	file = fopen("teste1.txt", "r");
	
	if(file == NULL){
		printf("arquivo nao encontrado\n");
		getchar();
		exit(0);
	}
	
	char frase[100];
	while (fgets(frase, 100, file) != NULL){
		printf("%s", frase);
	}


	fclose(file);
return 0;
}



