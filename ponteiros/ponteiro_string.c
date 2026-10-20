#include <stdio.h>
void copiarstring(char *copiardaqui, char *colaraqui){
	while(*copiardaqui != '\0'){
		*colaraqui = *copiardaqui;
		++copiardaqui;
		++colaraqui;
	}
	
}
int main(){
	void copiarstring(char *copiardaqui, char *copiaraqui);
	
	char string1[] = "pao com mortadela";
	char string2[20];
	
	copiarstring (string1, string2);
	printf("%s\n" ,string2);
	

return 0;
}



