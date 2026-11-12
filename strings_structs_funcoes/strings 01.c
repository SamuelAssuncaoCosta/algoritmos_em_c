//Escreva um programa em C que leia uma frase e apresente uma sigla com as iniciais de cada palavra da frase.

#include <stdio.h>
int main(){
	char frase [999];
	int i=0;
	printf("Digite uma frase: ");
    fgets(frase, 999, stdin);

    printf("Sigla: ");	
	
	for(i=0; frase[i] != '\0'; i++){
		if(i==0 || frase [i- 1] == ' ')
			if (frase[i] != ' ' && frase[i] != '\n') {
                printf("%c", frase[i]);
            }
	}
return 0;
}



