#include <stdio.h>

int main() {
    FILE *file;
    
    file = fopen("teste1.txt", "w");
    
    fprintf(file, "escrevendo em um documento txt pelo dev c++");
    fclose(file);
    
   
    

    return 0;
}
