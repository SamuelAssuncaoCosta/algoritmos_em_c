#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 50
int main(){
setlocale(LC_ALL,"Portuguese");

char s[n];
int i;

printf("insira um texto: \n");
gets(s);
i=strlen(s);
printf("\ntamanho do texto: %d\n\n", i);

printf("impressão de posição a posição: \n");
for(i=0;i<strlen(s); i++){
	printf("%c", s[i]);
}

return 0;
}



