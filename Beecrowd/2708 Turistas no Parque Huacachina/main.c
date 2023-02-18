#include <stdio.h>
#include <string.h>

int main(){
    int t, saida = 0, volta = 0, contS = 0, contV = 0, res[2];
    char str[7];

    while(1){
        scanf("%s %d", str, &t);

        if(strcmp(str, "ABEND") == 0)
            break;
        
        if(strcmp(str, "SALIDA") == 0){
            saida += t;
            contS++;
        }
        else{
            volta += t;
            contV++;
        }

    }

    res[0] = saida - volta;
    res[1] = contS - contV;

    printf("%d\n", res[0]);
    printf("%d\n", res[1]);

    return 0;
}