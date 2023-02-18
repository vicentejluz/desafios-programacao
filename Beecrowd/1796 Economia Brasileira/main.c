#include <stdio.h>

int main(){
    int q, sas, cont = 0, cont2 = 0;

    scanf("%d", &q);

    while(q--){
        scanf("%d", &sas);

        if(sas == 1)
            cont++;
        else
            cont2++;
    }

    if(cont >= cont2)
        printf("N\n");
    else
        printf("Y\n");

    return 0; 
}