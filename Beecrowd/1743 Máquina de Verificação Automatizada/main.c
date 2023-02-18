#include <stdio.h>

#define TAM 5

int main(){
    int v1[TAM], v2[TAM], i, cout = 0;

    for(i = 0; i < TAM; i++)
        scanf("%d", &v1[i]);
    
    for(i = 0; i < TAM; i++)
        scanf("%d", &v2[i]);

    for(i = 0; i < TAM; i++){
        if(v1[i] != v2[i])
            cout++;
    }

    if(cout == TAM)
        printf("Y\n");
    else
        printf("N\n");

    return 0;
}