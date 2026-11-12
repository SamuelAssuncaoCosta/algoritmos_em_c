#include <stdio.h>
int main(){
	char s[10];
	printf("digite algo (scanf convencional)");
	scanf("%s", s);
	fflush(stdin);
	
	printf("resultado: %s\n\n", s);
	
	printf("digite algo (scanf aprimorado): \n");
	scanf("%9[^\n]s",s);
	fflush(stdin);
	
	printf("resultado: %s\n\n", s);

return 0;
}



