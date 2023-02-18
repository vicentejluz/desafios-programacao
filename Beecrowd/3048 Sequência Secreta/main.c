#include <stdio.h>

int main(){
    int n, cont = 1;

    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 1; i < n; i++){
        if(vet[i] != vet[i - 1])
            cont++;
    }

    printf("%d\n", cont);

    return 0;
}