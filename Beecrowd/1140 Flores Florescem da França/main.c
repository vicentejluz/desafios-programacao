#include <stdio.h>
#include <string.h>

int main(){
    int i, log;
    char frase[1001];

    while(1){
        scanf(" %[^\n]", frase);

        if(strcmp(frase, "*") == 0)
            break;

        log = 1;    
        
        for(i = 0; frase[i] != '\0'; i++){
            if(frase[i] == ' '){
                if(frase[0] != toupper(frase[i + 1]) && frase[0] != tolower(frase[i + 1])){
                    log = 0;
                    break;
                }
            }

        }

        if(log == 0)
            printf("N\n");
        else
            printf("Y\n");
    }

    return 0;
}