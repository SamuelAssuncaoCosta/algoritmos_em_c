#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 50
int main(){
setlocale(LC_ALL,"Portuguese");

char s1[n] = {"Lógica de"};
char s2[n] = {"programação"};

printf("antes do strcat: \n");
printf("str1: %s\n", s1);
printf("str2: %s\n", s2);

strcat (s1,s2);
printf("depois do strcat: \n");
puts(s1);



return 0;
}



