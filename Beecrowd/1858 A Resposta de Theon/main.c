#include <stdio.h>

int obterPosMenor(int v[], int n);

int main(){
    int n, i;

    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("%d\n", obterPosMenor(v, n));

    return 0;
}

int obterPosMenor(int v[], int n){
    int pos = 0, menor, i;
    menor = v[0];

    for(i = 0; i < n; i++){
        if (v[i] < menor){
            menor = v[i];
            pos = i;
        }
    }

    return pos + 1;
}

