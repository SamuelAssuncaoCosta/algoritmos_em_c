#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *file;
	file = fopen("teste1.txt", "a");
	
	if(file == NULL){
		printf("arquivo nao encontrado\n");
		getchar();
		exit(0);
	}
	
	fprintf(file, "primeira linha\n");
	char frase[] = "segunda linha\n";
	fputs(frase, file);
	
	char caractere = '3';
	fputc(caractere, file);

	fclose(file);
return 0;
}



