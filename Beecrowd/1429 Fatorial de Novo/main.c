#include <stdio.h>
#include <string.h>

int fatorial(int n);

int main(){
    char num[5];
    int i, tam, fat, j, res;

    while(1){
        scanf("%s", num);

        if(strcmp(num, "0") == 0)
            break;

        j = 0;
        res = 0;    
        tam = strlen(num);
        int vet[tam];

        for(i = tam; i >= 1; i--){
            vet[j] = fatorial(i);
            j++;
        }

        for(i = 0; i < tam; i++)
            res += (num[i] - 48) * vet[i];

        printf("%d\n", res);
    }

    return 0;
}

int fatorial(int n){
    if(n == 0)
        return 1;
    return fatorial(n - 1) * n;
}