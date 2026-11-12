#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 50
int main(){
setlocale(LC_ALL,"Portuguese");

char hardtext[n] = {"/exit"};
char senha_usr[n];
int ok;

printf("digite um texto: ");
gets(senha_usr);

ok = strcmp (hardtext, senha_usr);

if(ok == 0){
	printf("textos iguais");
}else{
	printf("textos diferentes");
}

return 0;
}



